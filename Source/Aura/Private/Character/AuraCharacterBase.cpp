// Copyright Piero Padovan


#include "Character/AuraCharacterBase.h"

/**
 * CONSTRUCTOR
 */

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //the base Character won't tick (it was TRUE)

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	//The weapon will be attached to the socket WeaponHandSocket
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


