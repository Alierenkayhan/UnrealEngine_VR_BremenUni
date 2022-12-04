// Copyright Epic Games, Inc. All Rights Reserved.

#include "AlierenAdrianVRhwGameMode.h"
#include "AlierenAdrianVRhwCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlierenAdrianVRhwGameMode::AAlierenAdrianVRhwGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
