// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SC_BaseCharacter.h"
#include "SC_PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class SCHIEFS_API ASC_PlayerCharacter : public ASC_BaseCharacter
{
	GENERATED_BODY()

public:
	ASC_PlayerCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

protected:


private:

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess= "true"), Category = "Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess= "true"), Category = "Camera")
	UCameraComponent* CameraComp;

	void InitAbilityActorInfo();
	
};
