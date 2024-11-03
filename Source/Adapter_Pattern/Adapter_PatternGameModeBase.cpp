// Copyright Epic Games, Inc. All Rights Reserved.


#include "Adapter_PatternGameModeBase.h"
#include "Jugador.h"
#include "ArmaAdapter.h"

AAdapter_PatternGameModeBase::AAdapter_PatternGameModeBase()
{
}

void AAdapter_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	LaserAdapter = GetWorld()->SpawnActor<AArmaAdapter>(AArmaAdapter::StaticClass());
	Jugador = GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass());

	Jugador->SetAdaptador(LaserAdapter);
	Jugador->Cargar();
}

void AAdapter_PatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
