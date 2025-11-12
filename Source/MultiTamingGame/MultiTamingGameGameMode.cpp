// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiTamingGameGameMode.h"
#include "MultiTamingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiTamingGameGameMode::AMultiTamingGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
