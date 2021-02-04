// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Base_Char.generated.h"

UENUM()
enum class ETypes:uint8 {
	Neutral,
	Infernal,
	Ocean,
	WoodLand,
	Construc,
	Abyssal,
	Void,
	Glacial,
	Mountain,
	Mystic,
	Cosmic,
	Toxic,
	Electric
};

UCLASS()
class CONNORTHING_API ABase_Char : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABase_Char();

	ETypes Types = ETypes::Neutral;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void HealthGetter();
	void AbilityPowerGetter();
	void ArmourGetter();
	void MagicResistGetter();
	void SpeedGetter();

private:
	float Health = 0; 
	float AbilityPower = 0;
	float Armour = 0;
	float MagicResist = 0;
	float Speed = 0;
	float Level = 0;




};
