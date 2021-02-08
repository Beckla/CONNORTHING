// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Char.h"

// Sets default values
ABase_Char::ABase_Char()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshA(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	UStaticMesh* Asset = MeshA.Object;
	Mesh->SetStaticMesh(Asset);
	SetRootComponent(Mesh);
	

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABase_Char::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Char::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ABase_Char::HealthGetter()
{
	auto CHealth = Health;
	return CHealth;
}

float ABase_Char::AbilityPowerGetter()
{
	auto CAP = AbilityPower;
	return CAP;
}

float ABase_Char::ArmourGetter()
{
	auto CArmour = Armour;
	return Armour;
}

float ABase_Char::MagicResistGetter()
{
	auto CMR = MagicResist;
	return CMR;
}

float ABase_Char::SpeedGetter()
{
	auto CSpeed = Speed;
	return CSpeed;
}

