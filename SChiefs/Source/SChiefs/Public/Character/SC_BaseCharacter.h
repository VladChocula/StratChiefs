// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SC_BaseCharacter.generated.h"

UCLASS()
class SCHIEFS_API ASC_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASC_BaseCharacter();

protected:
	virtual void BeginPlay() override;

private:
	

};
