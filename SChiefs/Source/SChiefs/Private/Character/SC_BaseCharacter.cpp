// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SC_BaseCharacter.h"

// Sets default values
ASC_BaseCharacter::ASC_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

UAbilitySystemComponent* ASC_BaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ASC_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


