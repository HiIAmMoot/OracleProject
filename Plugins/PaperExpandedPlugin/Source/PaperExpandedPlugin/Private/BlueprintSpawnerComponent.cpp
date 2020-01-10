// Fill out your copyright notice in the Description page of Project Settings.

#include "BlueprintSpawnerComponent.h"
#include "PaperExpandedPlugin.h"


// Sets default values for this component's properties
UBlueprintSpawnerComponent::UBlueprintSpawnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
		// ...
	TileMapComp = nullptr;
}

// Called when the game starts
void UBlueprintSpawnerComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UBlueprintSpawnerComponent::SpawnBlueprints()
{
	FVector vector;
	TSubclassOf<AActor>* prefabClass;

	if (TileMapComp != nullptr ? TileMapComp->TileMap != nullptr : false)
	{
		if (BlueprintTiles.Max() == 0)
		{
			GetBlueprintTiles();
		}

		for (auto& prefab : BlueprintTiles)
		{
			vector = TileMapComp->GetTileCenterPosition(prefab.X, prefab.Y, prefab.LayerIndex, true);
			prefabClass = prefab.DataSet->Blueprints.Find(prefab.Info.PackedTileIndex);
			
			if (prefabClass!= nullptr)
			{
				SpawnBlueprintAt(prefab.X, prefab.Y, prefab.LayerIndex, prefab.DataSet->Replace,*prefabClass,false);
			}
		}
	
		TileMapComp->RebuildCollision();
	}
}

void UBlueprintSpawnerComponent::GetBlueprintTiles()
{
	if (TileMapComp != nullptr ? TileMapComp->TileMap != nullptr : false)
	{
		for (auto& set : TileDataSets)
		{
			for (auto& layer : TileMapComp->TileMap->TileLayers)
			{
				GetBlueprintTilesFromLayer(layer, set);
			}
		}
	}
}

void UBlueprintSpawnerComponent::GetBlueprintTilesFromLayer(UPaperTileLayer* layer, UTileBlueprintData* data)
{
	if (TileMapComp != nullptr ? TileMapComp->TileMap != nullptr : false)
	{
		FPaperTilePrefab newTile;
		int32 index = layer->GetLayerIndex();
		FPaperTileInfo newInfo;

		for (int32 x = 0; x < TileMapComp->TileMap->TileWidth; x++)
		{
			for (int32 y = 0; y < TileMapComp->TileMap->TileHeight; y++)
			{
				newInfo = TileMapComp->GetTile(x, y, index);
				
				if (data->Blueprints.Contains(newInfo.PackedTileIndex) && newInfo.TileSet == data->TileSet)
				{
					newTile.SetUpTile(x, y, index, newInfo, data); // Setup the papertile data info in our struct
					BlueprintTiles.Add(newTile);
				}
			}
		}
	}
}

void UBlueprintSpawnerComponent::SpawnBlueprintAt(int32 x, int32 y, int32 layer, bool replace, TSubclassOf<AActor> blueprintClass, bool rebuildCollision)
{
	if (TileMapComp != nullptr ? TileMapComp->TileMap != nullptr : false)
	{
		FVector vector;
		FPaperTileInfo tile = TileMapComp->GetTile(x, y, layer);


		vector = TileMapComp->GetTileCenterPosition(x,y, layer, true);
		GetWorld()->SpawnActor(*blueprintClass, &vector);


		if (replace) {
			tile.PackedTileIndex = -1;
			TileMapComp->SetTile(x, y, layer,tile);
		}
		if (rebuildCollision)
		{
			TileMapComp->RebuildCollision();
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Spawner is not initialised"));
	}
}

void UBlueprintSpawnerComponent::InitialiseSpawner(UPaperTileMapComponent * component)
{
	if (component != nullptr)
	{
		TileMapComp = component;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("component parameter is null ptr"));
	}


	if (TileMapComp != nullptr ? TileMapComp->TileMap != nullptr : false)
	{
		// Make the current tilemap asset into an editable copy for the component
		UPaperTileMap* tempMap = nullptr;

		tempMap = DuplicateObject(TileMapComp->TileMap, TileMapComp);
		TileMapComp->SetTileMap(tempMap);

		GetBlueprintTiles();
		Initialised = true;
		//GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, (tileMapComp->OwnsTileMap() ? TEXT("True") : TEXT("False")));
	}
}

void UBlueprintSpawnerComponent::SpawnBlueprintsOnMap()
{
	if (Initialised)
	{
		SpawnBlueprints();
		BlueprintTiles.Empty(0);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Spawner is not initialised"));
	}
}





