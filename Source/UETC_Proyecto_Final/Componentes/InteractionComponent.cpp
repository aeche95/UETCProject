// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"

UInteractionComponent::UInteractionComponent()
{
}

void UInteractionComponent::BeginPlay()
{
	OnComponentBeginOverlap.AddDynamic(this, &UInteractionComponent::OnObjectEnter);
	OnComponentEndOverlap.AddDynamic(this, &UInteractionComponent::OnObjectExit);
	
}

void UInteractionComponent::OnObjectEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OverlappedInteractables.Add(OtherActor);
}

void UInteractionComponent::OnObjectExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	OverlappedInteractables.Remove(OtherActor);
}

AActor* UInteractionComponent::GetMejorObjeto()
{
	for (AActor* A : OverlappedInteractables)
	{

	}
	return nullptr;
}
