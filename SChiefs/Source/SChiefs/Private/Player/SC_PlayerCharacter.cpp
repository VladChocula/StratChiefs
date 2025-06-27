// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SC_PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/SC_PlayerState.h"
#include "AbilitySystemComponent.h"
#include "Player/SC_PlayerController.h"

ASC_PlayerCharacter::ASC_PlayerCharacter()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 400.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
}

void ASC_PlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Initializing ability actor info on the server
	InitAbilityActorInfo();
}

void ASC_PlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//Initializing ability actor info on the client
	InitAbilityActorInfo();
}

void ASC_PlayerCharacter::InitAbilityActorInfo()
{
	ASC_PlayerState* ScPlayerState = GetPlayerState<ASC_PlayerState>();
	check(ScPlayerState);
	ScPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(ScPlayerState, this);
	AbilitySystemComponent = ScPlayerState->GetAbilitySystemComponent();
	AttributeSet = ScPlayerState->GetAttributeSet();

	//if-check on the player controller cast due to replication being enabled. This is a MP game afterall.
	if (ASC_PlayerController* SCPC = Cast<ASC_PlayerController>(GetController()))
	{
		//TODO: setup player HUD overlay here
	}

}
