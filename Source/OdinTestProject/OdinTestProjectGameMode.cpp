// Copyright Epic Games, Inc. All Rights Reserved.

#include "OdinTestProjectGameMode.h"
#include "OdinTestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOdinTestProjectGameMode::AOdinTestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
