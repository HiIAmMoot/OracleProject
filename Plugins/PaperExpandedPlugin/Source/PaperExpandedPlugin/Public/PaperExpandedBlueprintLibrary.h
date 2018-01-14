// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "PaperStructs.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PaperExpandedBlueprintLibrary.generated.h"

/**
 * Functions developed as part of the PaperExpanded plugin.
 */
UCLASS()
class PAPEREXPANDEDPLUGIN_API UPaperExpandedBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	/** Get Tile Position From Hit Location, useful for working with LineTrace. Supports 3D Collision Only*/
	UFUNCTION(BlueprintCallable, Category = "Paper2D")
	static FPaperTilePosition GetTilePositionFromHitLocation(EUpAxis axis, UPaperTileMapComponent * tilemapComp, FVector HitLocation, bool IgnoreCollisionThickness = false);
	
	/** Get Tile Paper Info From Hit Location, useful for working with LineTrace. Supports 3D Collision Only*/
	UFUNCTION(BlueprintCallable, Category = "Paper2D")
	static FPaperTileInfo GetTileFromHitLocation(EUpAxis axis, UPaperTileMapComponent * tilemapComp, FVector HitLocation);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Paper2D")
	static bool IsSocketOnFrame(const UPaperFlipbook* flipbook, FName socketName, const int32 frameIndex);
	
};
