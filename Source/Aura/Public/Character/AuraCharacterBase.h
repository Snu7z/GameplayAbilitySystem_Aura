// Copyright Piero Padovan

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

/**
 * DECLARATIONS
 */

UCLASS(Abstract) //Abstract -> it prevents the class to be dragged into the level
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAuraCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Combat")
	// This is a Mesh component pointer -> MESH COMPONENT: USkeletalMeshComponent
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
};
