// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SC_PlayerState.h"
#include "AbilitySystem/SC_AttributeSet.h"
#include "AbilitySystem/SC_AbilitySystemComponent.h"

ASC_PlayerState::ASC_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<USC_AbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet =CreateDefaultSubobject<USC_AttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* ASC_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
