// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPaw5.generated.h"

UCLASS()
class CPLUSPLUS_API AMyPaw5 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPaw5();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Light")
	ULightComponent* LightComponent;
	UFUNCTION(BlueprintCallable, Category = "Light Control")
	void TurnOnLight();

	UFUNCTION(BlueprintCallable, Category = "Light Control")
	void TurnOffLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
