// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestForAndroid10GameMode.h"
#include "TestForAndroid10Character.h"
#include "UObject/ConstructorHelpers.h"

ATestForAndroid10GameMode::ATestForAndroid10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
