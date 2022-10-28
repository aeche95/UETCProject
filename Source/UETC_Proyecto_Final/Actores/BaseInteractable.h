// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UETC_Proyecto_Final/Interfaces/InteractableInterfaz.h"
#include "UETC_Proyecto_Final/UETCGameTypes.h"
#include "BaseInteractable.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgresoObjetivoDelegate, int32, Index);
/**
 * 
 */
UCLASS()
class UETC_PROYECTO_FINAL_API ABaseInteractable : public AStaticMeshActor, public IInteractableInterfaz
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Interaccion")
	EUETCTipoDeInteraccion TipoDeInteraccion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaccion")
	int32 Prioridad = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaccion")
	int32 NumeroObjetivo = 0;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, VisibleAnywhere, Category = "Interaccion")
	FProgresoObjetivoDelegate ProgresoDelegate;

};
