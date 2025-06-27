// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/SC_AttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffectExtension.h"
#include "AbilitySystemBlueprintLibrary.h"

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

void USC_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
}

void USC_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FEffectProperties OutEffectProps;
	SetEffectProperties(Data, OutEffectProps);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
}

void USC_AttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USC_AttributeSet, Health, OldHealth);
}

void USC_AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USC_AttributeSet, MaxHealth, OldMaxHealth);
}

const void USC_AttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& OutEffectProps)
{
	OutEffectProps.EffectContextHandle = Data.EffectSpec.GetContext();
	OutEffectProps.SourceASC = OutEffectProps.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if (IsValid(OutEffectProps.SourceASC) &&
		OutEffectProps.SourceASC->AbilityActorInfo.IsValid() &&
		OutEffectProps.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		OutEffectProps.SourceAvatarActor = OutEffectProps.SourceASC->AbilityActorInfo->AvatarActor.Get();
		OutEffectProps.SourceController = OutEffectProps.SourceASC->AbilityActorInfo->PlayerController.Get();

		//In case this is a pawn, not a character
		if (OutEffectProps.SourceController == nullptr && OutEffectProps.SourceAvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(OutEffectProps.SourceAvatarActor))
			{
				OutEffectProps.SourceController = Pawn->GetController();
			}
		}

		if (OutEffectProps.SourceController)
		{
			OutEffectProps.SourceCharacter = Cast<ACharacter>(OutEffectProps.SourceController->GetPawn());
		}
	}

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		OutEffectProps.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		OutEffectProps.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		OutEffectProps.TargetCharacter = Cast<ACharacter>(OutEffectProps.TargetAvatarActor);
		OutEffectProps.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OutEffectProps.TargetAvatarActor);
	}

}
