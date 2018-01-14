// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "PaperExpandedPlugin.h"
#include "GameFramework/Actor.h"
#include "TileBlueprintMapActor.generated.h"

UCLASS()
class PAPEREXPANDEDPLUGIN_API ATileBlueprintMapActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Tile Blueprints")
	UPaperTileMapComponent* TileMapComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Tile Blueprints")
	UBlueprintSpawnerComponent* SpawnerComponent;
	
	// Sets default values for this actor's properties
	ATileBlueprintMapActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
