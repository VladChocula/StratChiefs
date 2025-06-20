// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/SC_AttributeSet.h"
#include "Net/UnrealNetwork.h"

USC_AttributeSet::USC_AttributeSet()
{
	InitHealth(80.f);
	InitMaxHealth(100.f);
}

void USC_AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USC_AttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USC_AttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void USC_AttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USC_AttributeSet, Health, OldHealth);
}

void USC_AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USC_AttributeSet, MaxHealth, OldMaxHealth);
}
