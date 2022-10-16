// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"
#include "UETC_Proyecto_Final/Actores/BaseInteractable.h"
#include "UETC_Proyecto_Final/Interfaces/InteractableInterfaz.h"

//UInteractionComponent::UInteractionComponent()
//{
//}

//void UInteractionComponent::BeginPlay()
//{
//	
//	
//}

void UInteractionComponent::OnObjectEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABaseInteractable* Obj = Cast<ABaseInteractable>(OtherActor);
	if (Obj)
	{
		OverlappedInteractables.AddUnique(Obj);
		//UE_LOG(LogTemp, Warning, TEXT("Added Actor"));
	}

}

void UInteractionComponent::OnObjectExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABaseInteractable* Obj = Cast<ABaseInteractable>(OtherActor);
	if (OverlappedInteractables.Contains(Obj))
	{
		OverlappedInteractables.Remove(Obj);
	}
}

ABaseInteractable* UInteractionComponent::GetMejorInteraccion()
{
	ABaseInteractable* MejorObjeto = nullptr;
	int32 MayorPrioridad = 0;
	for (ABaseInteractable* A : OverlappedInteractables)
	{
		if (IInteractableInterfaz::Execute_GetPrioridad(A) > MayorPrioridad)
			{
				MejorObjeto = A;
				MayorPrioridad = IInteractableInterfaz::Execute_GetPrioridad(A);
			}
		
	}
	return MejorObjeto;
	
}
