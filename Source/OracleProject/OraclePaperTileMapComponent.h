// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperTileMapComponent.h"
#include "PaperTileMap.h"
#include "PaperTileLayer.h"
#include "PaperTileSet.h"
#include "Kismet/KismetSystemLibrary.h"
#include "OraclePaperTileMapComponent.generated.h"

UENUM(BlueprintType)
enum class ETileCollisionDelta : uint8
{
	PositiveX	UMETA(DisplayName = "X+"),
	NegativeX 	UMETA(DisplayName = "X-"),
	PositiveY	UMETA(DisplayName = "Y+"),
	NegativeY	UMETA(DisplayName = "Y-"),
	PositiveZ 	UMETA(DisplayName = "Z+"),
	NegativeZ 	UMETA(DisplayName = "Z-")
};

USTRUCT(BlueprintType)
struct FSpriteGeometryCollectionArray
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TArray<FSpriteGeometryCollection> Array;

	TArray<FIntVector> TileLocations;
};

USTRUCT(BlueprintType)
struct FTileCollisionData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	TArray<FVector2D> Vertices;

	UPROPERTY(BlueprintReadWrite)
	TArray<int32> Triangles;
};

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class ORACLEPROJECT_API UOraclePaperTileMapComponent : public UPaperTileMapComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	TArray<FSpriteGeometryCollectionArray> CollisionGeometryInfo;

	UFUNCTION(BlueprintCallable)
	void CreateCollisionGeometry();

	UFUNCTION()
	bool LayerCollides(UPaperTileLayer* TileLayer);
	
	UFUNCTION(BlueprintCallable)
	bool ConvertCollisionData(int LayerIndex, TArray<FTileCollisionData>& CollisionData, ETileCollisionDelta XDirection, ETileCollisionDelta YDirection, bool InvertLocalX, bool InvertLocalY);

	float GetDirectionValue(ETileCollisionDelta Direction, FVector TilePosition);

protected:

	void GetCollisionData();

};