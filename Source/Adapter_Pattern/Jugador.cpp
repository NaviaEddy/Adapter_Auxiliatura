// Fill out your copyright notice in the Description page of Project Settings.


#include "Jugador.h"

// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugador::Cargar()
{
	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("Cargar(): El adaptador es null, revise la conversion")));
		return;
	}
	else {
		adapter->Cargar();
	}
}

void AJugador::SetAdaptador(AActor* _Arma)
{
	adapter = Cast<IIAdapter>(_Arma);
	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("SetArma(): El actor pasado no pudo convetirse a tipo IAdapter")));
	}
}

