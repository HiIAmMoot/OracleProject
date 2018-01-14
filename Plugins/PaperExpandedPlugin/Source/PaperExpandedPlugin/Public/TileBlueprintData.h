// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "PaperExpandedPlugin.h"
#include "TileBlueprintData.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Paper2D), Blueprintable)
class PAPEREXPANDEDPLUGIN_API UTileBlueprintData : public UObject
{
	GENERATED_BODY()	

public:
	
	UPROPERTY(EditAnywhere, Category = "Tile Blueprints")
	UPaperTileSet* TileSet;

	UPROPERTY(EditAnywhere, Category = "Tile Blueprints")
	bool Replace;

	UPROPERTY(EditAnywhere, Category = "Tile Blueprints")
	TMap<int32, TSubclassOf<AActor>> Blueprints;
	
};
