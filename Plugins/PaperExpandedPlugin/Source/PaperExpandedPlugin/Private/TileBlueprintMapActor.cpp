// Fill out your copyright notice in the Description page of Project Settings.

#include "TileBlueprintMapActor.h"
#include "PaperExpandedPlugin.h"


// Sets default values
ATileBlueprintMapActor::ATileBlueprintMapActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	TileMapComponent = CreateDefaultSubobject<UPaperTileMapComponent>(TEXT("TileMap"));
	SpawnerComponent = CreateDefaultSubobject<UBlueprintSpawnerComponent>(TEXT("Blueprint Spawner"));
}

// Called when the game starts or when spawned
void ATileBlueprintMapActor::BeginPlay()
{
	if (TileMapComponent != nullptr && SpawnerComponent != nullptr)
	{
		SpawnerComponent->InitialiseSpawner(TileMapComponent);
		SpawnerComponent->SpawnBlueprintsOnMap();
	}

	Super::BeginPlay();	
}

// Called every frame
void ATileBlueprintMapActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

