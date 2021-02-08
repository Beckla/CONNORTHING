// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
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

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CONNORTHING_API ABase_Char : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABase_Char();

	ETypes Types = ETypes::Neutral;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Getters

	UFUNCTION(BlueprintCallable, Category = Setup)
	float HealthGetter();
	
	UFUNCTION(BlueprintCallable, Category = Setup)
	float AbilityPowerGetter();
	
	UFUNCTION(BlueprintCallable, Category = Setup)
	float ArmourGetter();
	
	UFUNCTION(BlueprintCallable, Category = Setup)
	float MagicResistGetter();
	
	UFUNCTION(BlueprintCallable, Category = Setup)
	float SpeedGetter();



private:
	UPROPERTY(EditDefaultsOnly, Category = BaseStats)
	float Health = 0;

	UPROPERTY(EditDefaultsOnly, Category = BaseStats)
	float AbilityPower = 0;

	UPROPERTY(EditDefaultsOnly, Category = BaseStats)
	float Armour = 0;

	UPROPERTY(EditDefaultsOnly, Category = BaseStats)
	float MagicResist = 0;

	UPROPERTY(EditDefaultsOnly, Category = BaseStats)
	float Speed = 0;

	UPROPERTY(EditDefaultsOnly, Category = BaseStats)
	float Level = 0;




};
