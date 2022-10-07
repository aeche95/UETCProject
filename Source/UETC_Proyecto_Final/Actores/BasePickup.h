// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UETC_Proyecto_Final/Interfaces/InteractableInterfaz.h"
#include "BasePickup.generated.h"


UCLASS()
class UETC_PROYECTO_FINAL_API ABasePickup : public AStaticMeshActor, public IInteractableInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Prioridad = 1;

};
