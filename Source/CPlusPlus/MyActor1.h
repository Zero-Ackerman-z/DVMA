// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class CPLUSPLUS_API AMyActor1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Math")
	float MyValue;

public:	
	UFUNCTION(BlueprintCallable, Category = "Math")
	float Sum(float A, float B); // Método para sumar dos números

	virtual void Tick(float DeltaTime) override; // Para actualizar en cada tick
};