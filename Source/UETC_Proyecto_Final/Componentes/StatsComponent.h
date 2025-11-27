// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMuerteDelegate);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UETC_PROYECTO_FINAL_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Stats")
	float Health = 100.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	float MaxHealth = 100.f;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	float GetHealthNormalized() { return Health / MaxHealth; };
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void TakeDamage(float Dano);
		
	UPROPERTY(BlueprintAssignable, Category = "Stats")
	FMuerteDelegate OnDeathDelegate;
};
