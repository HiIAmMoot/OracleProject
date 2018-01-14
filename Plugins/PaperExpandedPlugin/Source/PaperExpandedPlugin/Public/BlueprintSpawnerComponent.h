// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TileBlueprintData.h"
#include "Components/ActorComponent.h"
#include "BlueprintSpawnerComponent.generated.h"


UCLASS( ClassGroup=(Paper2D), meta=(BlueprintSpawnableComponent) )
class PAPEREXPANDEDPLUGIN_API UBlueprintSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Tile Blueprints")
	TArray<UTileBlueprintData*> TileDataSets;

	UPROPERTY()
	UPaperTileMapComponent* TileMapComp;


	TArray<FPaperTilePrefab> BlueprintTiles;

	bool Initialised = false;

	UBlueprintSpawnerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION()
	/** Spawn Blueprints defined in the current TileDataSets**/
	void SpawnBlueprints();

	UFUNCTION()
	/** Fill the prefab tiles array with the tiles it will be spawning at */
	void GetBlueprintTiles();

	UFUNCTION()
	/** Fill the prefab tiles array with the tiles it will be spawning at from a specifc layer */
	void GetBlueprintTilesFromLayer(UPaperTileLayer* layer, UTileBlueprintData* data);


public:

	/** Spawns an actor at the map position and then replaces the tile if necessary */
	UFUNCTION(BlueprintCallable)
	void SpawnBlueprintAt(int32 x, int32 y, int32 layer, bool replace, TSubclassOf<AActor> blueprintClass, bool rebuildCollision);

	/** Initialise the spawner with the input tilemap component*/
	UFUNCTION(BlueprintCallable)
	void InitialiseSpawner(UPaperTileMapComponent* component);

	/** Spawn actors on the initialised map */
	UFUNCTION(BlueprintCallable)
	void SpawnBlueprintsOnMap();
};
