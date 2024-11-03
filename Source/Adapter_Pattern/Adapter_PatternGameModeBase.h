// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Adapter_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ADAPTER_PATTERN_API AAdapter_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdapter_PatternGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	class AJugador* Jugador;
	class AArmaAdapter* LaserAdapter;
	
};
