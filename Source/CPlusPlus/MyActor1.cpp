// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor1.h"

// Sets default values
AMyActor1::AMyActor1()
{
	MyValue = 0.0f;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AMyActor1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Mostrar el valor de MyValue en la pantalla
	FVector Location = GetActorLocation();
	FString ValueString = FString::Printf(TEXT("My Value: %f"), MyValue);
	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::White, ValueString);


}
float AMyActor1::Sum(float A, float B)
{
	MyValue = A + B;
	return A + B;
}
