// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Char.h"

// Sets default values
ABase_Char::ABase_Char()
{
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

