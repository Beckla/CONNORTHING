// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CONNORTHINGGameMode.h"
#include "CONNORTHINGPlayerController.h"
#include "CONNORTHINGPawn.h"

ACONNORTHINGGameMode::ACONNORTHINGGameMode()
{
	// no pawn by default
	DefaultPawnClass = ACONNORTHINGPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ACONNORTHINGPlayerController::StaticClass();
}
