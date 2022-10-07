// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventario.h"
#include "UETC_Proyecto_Final/Actores/BasePickup.h"

// Sets default values for this component's properties
UInventario::UInventario()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


//// Called when the game starts
//void UInventario::BeginPlay()
//{
//	Super::BeginPlay();
//
//	// ...
//	
//}
//
//
//// Called every frame
//void UInventario::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//}

void UInventario::AgregarAlInventario(ABasePickup* NuevoObjeto)
{
	ObjetosRecogidos.AddUnique(NuevoObjeto);
}

void UInventario::EliminarDeInventario(ABasePickup* Eliminado)
{
	ObjetosRecogidos.Remove(Eliminado);
}

bool UInventario::ConsultarObjeto(ABasePickup* Objeto)
{
	return ObjetosRecogidos.Contains(Objeto);
}

ABasePickup* UInventario::UsarObjeto(TSubclassOf<ABasePickup> Clase)
{
	for (ABasePickup* Obj : ObjetosRecogidos)
	{
		if (Obj->IsA(Clase))
		{
			return Obj;
		}
	}
	return nullptr;
}

