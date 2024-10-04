// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/PointLightComponent.h"
#include "MyPaw5.h"

// Sets default values
AMyPaw5::AMyPaw5()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//MyValue = 0.0f;

	LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent"));
	RootComponent = LightComponent; // Establece la luz como componente raíz
}

// Called when the game starts or when spawned
void AMyPaw5::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPaw5::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPaw5::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AMyPaw5::TurnOnLight()
{
    if (LightComponent)
    {
        LightComponent->SetVisibility(true);
    }
}

void AMyPaw5::TurnOffLight()
{
    if (LightComponent)
    {
        LightComponent->SetVisibility(false);
    }
}
