// Copyright Epic Games, Inc. All Rights Reserved.

#include "UETC_Proyecto_FinalGameMode.h"
#include "UETC_Proyecto_FinalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUETC_Proyecto_FinalGameMode::AUETC_Proyecto_FinalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
