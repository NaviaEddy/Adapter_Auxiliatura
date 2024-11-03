// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaLaserNv2.h"

// Sets default values
AArmaLaserNv2::AArmaLaserNv2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmaLaserNv2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmaLaserNv2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmaLaserNv2::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
		FString::Printf(TEXT("Disparando rayos laser del juego galaga")));
}

