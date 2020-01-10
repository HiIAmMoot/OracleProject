// Fill out your copyright notice in the Description page of Project Settings.

#include "OraclePaperTileMapComponent.h"

void UOraclePaperTileMapComponent::CreateCollisionGeometry()
{
	//Gather collision data first
	GetCollisionData();

	//Start generating the geometry

}

void UOraclePaperTileMapComponent::GetCollisionData()
{
	//Empty the collision array
	CollisionGeometryInfo.Empty();

	//Get map size
	int MapWidth;
	int MapHeight;
	int NumLayers;
	GetMapSize(MapWidth, MapHeight, NumLayers);

	for (int Z = 0; Z < NumLayers; Z++)//First loop through the number of layers
	{
		if ((TileMap != nullptr) && TileMap->TileLayers.IsValidIndex(Z) && LayerCollides(TileMap->TileLayers[Z]))//check if layer is valid and whether it collides
		{
			FSpriteGeometryCollectionArray LayerCollisionInfo;
			for (int X = 0; X < MapWidth; X++)//Then loop into map width
			{
				for (int Y = 0; Y < MapHeight; Y++)//Per map width you loop into map height
				{
					FPaperTileInfo TileInfo = GetTile(X, Y, Z);
					//Check if tile is valid & has collision
					if ((TileInfo.TileSet != nullptr) && (TileInfo.GetTileIndex() < TileInfo.TileSet->GetTileCount()) && TileInfo.TileSet->GetTileMetadata(TileInfo.GetTileIndex())->HasCollision())
					{
						//UKismetSystemLibrary::PrintString(this, "Tile has collision");
						FSpriteGeometryCollection CollisionData = TileInfo.TileSet->GetTileMetadata(TileInfo.GetTileIndex())->CollisionData;

						//UKismetSystemLibrary::PrintString(this, TilePosition.ToString());
						//Adjust the shape coordinates to match the tile location
						LayerCollisionInfo.Array.Add(CollisionData);
						LayerCollisionInfo.TileLocations.Add(FIntVector(X, Y, Z));
					}
					
				}
			}
			


			CollisionGeometryInfo.Add(LayerCollisionInfo);
		}

	}
}

bool UOraclePaperTileMapComponent::LayerCollides(UPaperTileLayer* InTileLayer)
{
	if (InTileLayer != nullptr)
	{
		const UProperty* Property = (UPaperTileLayer::StaticClass())->FindPropertyByName(FName(TEXT("bLayerCollides")));
		return ((UBoolProperty*)Property)->GetPropertyValue_InContainer(InTileLayer);
	}

	return false;
}

//int UOraclePaperTileMapComponent::AllocatedHeight(UPaperTileLayer* InTileLayer)
//{
	//if (InTileLayer != nullptr)
	//{
	//	const UProperty* Property = (UPaperTileLayer::StaticClass())->FindPropertyByName(FName(TEXT("AllocatedHeight")));
	//	return ((UIntProperty*)Property)->GetPropertyValue_InContainer(InTileLayer);
	//}

	//return 0;
//}

bool UOraclePaperTileMapComponent::ConvertCollisionData(int LayerIndex, TArray<FTileCollisionData>& CollisionData, ETileCollisionDelta XDirection, ETileCollisionDelta YDirection, bool InvertLocalX, bool InvertLocalY)
{
	if (CollisionGeometryInfo.IsValidIndex(LayerIndex))
	{
		//for (FSpriteGeometryCollection SpriteGeometry : CollisionGeometryInfo[LayerIndex].Array)

		TArray<FSpriteGeometryCollection> SpriteGeometryArray = CollisionGeometryInfo[LayerIndex].Array;
		for (int i = 0 ; i < CollisionGeometryInfo[LayerIndex].Array.Num() ; i++)
		{
			TArray<FVector2D> Vertices;
			TArray<FVector2D> Triangles;

			/*
			for (FSpriteGeometryShape& Shapes : SpriteGeometryArray[i].Shapes)
			{
				Vertices.Append(Shapes.Vertices);
			}

			SpriteGeometryArray[i].Triangulate(Triangles, true);
			//Data.Vertices = Vertices;

			//Turn triangle data into an array of int which can be read by RuntimeMeshComponent
			for (FVector2D TriangleData : Triangles)
			{
				Data.Triangles.Add(Vertices.Find(TriangleData));
			}*/

			//Adjust the locations of each tile
			FIntVector TileCoordinates = CollisionGeometryInfo[LayerIndex].TileLocations[i];
			FVector2D LocalDirection = FVector2D(1.f, 1.f);
			if (InvertLocalX)
			{
				LocalDirection.X = -1;
			}
			if (InvertLocalY)
			{
				LocalDirection.Y = -1;
			}

			
			for (FSpriteGeometryShape& Shapes : SpriteGeometryArray[i].Shapes)
			{
				FTileCollisionData Data;
				FVector TilePosition = GetTileCenterPosition(TileCoordinates.X, TileCoordinates.Y, TileCoordinates.Z);
				float X = GetDirectionValue(XDirection, TilePosition);
				float Y = GetDirectionValue(YDirection, TilePosition);

				for (FVector2D& ShapeVertices : Shapes.Vertices)
				{
					ShapeVertices = ShapeVertices * LocalDirection + FVector2D(X, Y);
					//UKismetSystemLibrary::PrintString(this, ShapeVertices.ToString());
				}

				//Add an array of vertices for each shape instead of each tile
				Data.Vertices.Append(Shapes.Vertices);
				CollisionData.Add(Data);
			}
			
		}

		return true;
	}

	return false;
}

float UOraclePaperTileMapComponent::GetDirectionValue(ETileCollisionDelta Direction, FVector TilePosition)
{
	switch (Direction)
	{
		case ETileCollisionDelta::PositiveX:
		{
			return TilePosition.X;
		}
		case ETileCollisionDelta::NegativeX:
		{
			return -TilePosition.X;
		}
		case ETileCollisionDelta::PositiveY:
		{
			return TilePosition.Y;
		}
		case ETileCollisionDelta::NegativeY:
		{
			return -TilePosition.Y;
		}
		case ETileCollisionDelta::PositiveZ:
		{
			return TilePosition.Z;
		}
		case ETileCollisionDelta::NegativeZ:
		{
			return -TilePosition.Z;
		}
		default:
		{
			return TilePosition.X;
		}

	}
}