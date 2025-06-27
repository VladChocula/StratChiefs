// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataAsset_InputConfig.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FSCInputActionConfig
{
	GENERATED_BODY()

public:
	// meta categories limits the gameplay tags that InputTag can choose from when binding it in gameplay tag manager
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* InputAction; 

};


/**
 * 
 */
UCLASS()
class SCHIEFS_API UDataAsset_InputConfig : public UDataAsset
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* DefaultMappingContext;

	//Title property sets the title of the each row in the array as the string literal value
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FSCInputActionConfig> NativeInputActions;

	UInputAction* FindNativeInputActionByTag(const FGameplayTag& InInputTag) const;
};
