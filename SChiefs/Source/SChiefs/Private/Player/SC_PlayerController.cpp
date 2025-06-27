// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SC_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

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

	if (Subsys) { Subsys->AddMappingContext(PlayerContext, 0); }
}

void ASC_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASC_PlayerController::Move);
	EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &ASC_PlayerController::Look);
}

void ASC_PlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDir, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDir, InputAxisVector.X);
	}
}

void ASC_PlayerController::Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisValue = InputActionValue.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddControllerYawInput(LookAxisValue.X);
		ControlledPawn->AddControllerPitchInput(LookAxisValue.Y);
	}
}
