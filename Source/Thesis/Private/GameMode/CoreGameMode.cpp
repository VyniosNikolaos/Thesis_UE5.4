// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameMode/CoreGameMode.h"
#include "Character/MainCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoreGameMode::ACoreGameMode()
{
	/*// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	} */
}
