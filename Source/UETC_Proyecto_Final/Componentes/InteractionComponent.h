// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.generated.h"

class IInteractableInterfaz;
class ABaseInteractable;
/**
 * 
 */
UCLASS(ClassGroup = "Custom", hidecategories = (Object, LOD, Lighting, TextureStreaming), editinlinenew, meta = (DisplayName = "Interaction Box", BlueprintSpawnableComponent))
class UETC_PROYECTO_FINAL_API UInteractionComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:

	/*UInteractionComponent();*/

	/*void BeginPlay();*/
	UFUNCTION()
	void OnObjectEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnObjectExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	ABaseInteractable* GetMejorInteraccion();

private:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<ABaseInteractable*> OverlappedInteractables;
};
