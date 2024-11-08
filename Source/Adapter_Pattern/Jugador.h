// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAdapter.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jugador.generated.h"

UCLASS()
class ADAPTER_PATTERN_API AJugador : public AActor, public IIAdapter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Cargar() override;
	void SetAdaptador(AActor* _Arma);

private:
	IIAdapter* adapter;
};
