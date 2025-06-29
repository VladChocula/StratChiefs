// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SC_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "DataAssets/DataAsset_InputConfig.h"
#include "GameplayTags/SC_GameplayTags.h"
#include "SCComponents/Input/Player/SC_PlayerInputComponent.h"

ASC_PlayerController::ASC_PlayerController()
{
	bReplicates = true;
}

void ASC_PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}	

void ASC_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(PlayerContext);
	UEnhancedInputLocalPlayerSubsystem* Subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	if (Subsys) { Subsys->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0); }
}

void ASC_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	checkf(InputConfigDataAsset, TEXT("INPUTCONFIGDATAASSET HAS NOT BEEN ASSIGNED IN PLAYER CONTROLLER"));
	USC_PlayerInputComponent* SC_InputComp = CastChecked<USC_PlayerInputComponent>(InputComponent);
	
	SC_InputComp->BindNativeInputAction(InputConfigDataAsset, SCGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ASC_PlayerController::Input_Move);
	SC_InputComp->BindNativeInputAction(InputConfigDataAsset, SCGameplayTags::InputTag_Look, ETriggerEvent::Triggered, this, &ASC_PlayerController::Input_Look);

}

void ASC_PlayerController::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f,GetControlRotation().Yaw, 0.f);
	APawn* ControlledPawn = GetPawn<APawn>();

	if (InputAxisVector.Y != 0.f && ControlledPawn)
	{
		const FVector ForwardDir = MovementRotation.RotateVector(FVector::ForwardVector);
		ControlledPawn->AddMovementInput(ForwardDir, InputAxisVector.Y);
	}

	if (InputAxisVector.X != 0.f && ControlledPawn)
	{
		const FVector RightDir = MovementRotation.RotateVector(FVector::RightVector);
		ControlledPawn->AddMovementInput(RightDir, InputAxisVector.X);
	}
}

void ASC_PlayerController::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisValue = InputActionValue.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddControllerYawInput(LookAxisValue.X);
		ControlledPawn->AddControllerPitchInput(LookAxisValue.Y);
	}
}
