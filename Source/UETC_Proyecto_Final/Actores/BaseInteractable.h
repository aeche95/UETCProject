// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UETC_Proyecto_Final/Interfaces/InteractableInterfaz.h"
#include "UETC_Proyecto_Final/UETCGameTypes.h"
#include "BaseInteractable.generated.h"

/**
 * 
 */
UCLASS()
class UETC_PROYECTO_FINAL_API ABaseInteractable : public AStaticMeshActor, public IInteractableInterfaz
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	EUETCTipoDeInteraccion TipoDeInteraccion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Prioridad = 1;
};
