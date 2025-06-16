// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SC_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SCHIEFS_API ASC_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ASC_PlayerController();

protected:
	virtual void BeginPlay() override;

private:
	
};
