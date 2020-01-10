// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "TileBlueprintData.h"
#include "PaperTileSet.h"
#include "PaperTileLayer.h"
#include "PaperStructs.generated.h"

class UTileBlueprintData;

/*
X: X position in tilemap
Y: Y position in tilemap
layerIndex: Layer that the tile is on
info: the Tile Info this tile has
*/
USTRUCT()
struct FPaperTilePrefab
{
	GENERATED_BODY()
public:

	UPROPERTY()
	int32 X;

	UPROPERTY()
	int32 Y;

	UPROPERTY()
	int32 LayerIndex;

	UPROPERTY()
	FPaperTileInfo Info;

	UPROPERTY()
	UPaperTileSet* TileSet;

	UTileBlueprintData* DataSet;

	FPaperTilePrefab() {}

	void SetUpTile(int32 InX, int32 InY, int32 InLayerIndex, FPaperTileInfo InInfo, UTileBlueprintData* InDataSet)
	{
		X = InX;
		Y = InY;
		LayerIndex = InLayerIndex;
		Info = InInfo;
		DataSet = InDataSet;
	}
};

USTRUCT(BlueprintType)
struct FPaperTilePosition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Layer;
};

UENUM(BlueprintType)
enum class EUpAxis : uint8
{
	UA_Y	UMETA(DisplayName="Y Axis"),
	UA_Z	UMETA(DisplayName="Z Axis")
};