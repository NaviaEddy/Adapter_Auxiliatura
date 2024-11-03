// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaAdapter.h"
#include "ArmaLaserNv2.h"

// Sets default values
AArmaAdapter::AArmaAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmaAdapter::BeginPlay()
{
	Super::BeginPlay();
	LaserNv2 = GetWorld()->SpawnActor<AArmaLaserNv2>(AArmaLaserNv2::StaticClass());
}

// Called every frame
void AArmaAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmaAdapter::Cargar()
{
	LaserNv2->Disparar();
}

