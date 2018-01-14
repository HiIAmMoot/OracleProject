// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PaperExpandedPlugin.h"
#include "Public/BlueprintSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintSpawnerComponent() {}
// Cross Module References
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UBlueprintSpawnerComponent_NoRegister();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UBlueprintSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PaperExpandedPlugin();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_GetBlueprintTiles();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_GetBlueprintTilesFromLayer();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UTileBlueprintData_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_InitialiseSpawner();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprintAt();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprints();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprintsOnMap();
// End Cross Module References
	void UBlueprintSpawnerComponent::StaticRegisterNativesUBlueprintSpawnerComponent()
	{
		UClass* Class = UBlueprintSpawnerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlueprintTiles", (Native)&UBlueprintSpawnerComponent::execGetBlueprintTiles },
			{ "GetBlueprintTilesFromLayer", (Native)&UBlueprintSpawnerComponent::execGetBlueprintTilesFromLayer },
			{ "InitialiseSpawner", (Native)&UBlueprintSpawnerComponent::execInitialiseSpawner },
			{ "SpawnBlueprintAt", (Native)&UBlueprintSpawnerComponent::execSpawnBlueprintAt },
			{ "SpawnBlueprints", (Native)&UBlueprintSpawnerComponent::execSpawnBlueprints },
			{ "SpawnBlueprintsOnMap", (Native)&UBlueprintSpawnerComponent::execSpawnBlueprintsOnMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_GetBlueprintTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
				{ "ToolTip", "Fill the prefab tiles array with the tiles it will be spawning at" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSpawnerComponent, "GetBlueprintTiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_GetBlueprintTilesFromLayer()
	{
		struct BlueprintSpawnerComponent_eventGetBlueprintTilesFromLayer_Parms
		{
			UPaperTileLayer* layer;
			UTileBlueprintData* data;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data = { UE4CodeGen_Private::EPropertyClass::Object, "data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventGetBlueprintTilesFromLayer_Parms, data), Z_Construct_UClass_UTileBlueprintData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_layer = { UE4CodeGen_Private::EPropertyClass::Object, "layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventGetBlueprintTilesFromLayer_Parms, layer), Z_Construct_UClass_UPaperTileLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_layer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
				{ "ToolTip", "Fill the prefab tiles array with the tiles it will be spawning at from a specifc layer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSpawnerComponent, "GetBlueprintTilesFromLayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(BlueprintSpawnerComponent_eventGetBlueprintTilesFromLayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_InitialiseSpawner()
	{
		struct BlueprintSpawnerComponent_eventInitialiseSpawner_Parms
		{
			UPaperTileMapComponent* component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component = { UE4CodeGen_Private::EPropertyClass::Object, "component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventInitialiseSpawner_Parms, component), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(NewProp_component_MetaData, ARRAY_COUNT(NewProp_component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
				{ "ToolTip", "Initialise the spawner with the input tilemap component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSpawnerComponent, "InitialiseSpawner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BlueprintSpawnerComponent_eventInitialiseSpawner_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprintAt()
	{
		struct BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms
		{
			int32 x;
			int32 y;
			int32 layer;
			bool replace;
			TSubclassOf<AActor>  blueprintClass;
			bool rebuildCollision;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_rebuildCollision_SetBit = [](void* Obj){ ((BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms*)Obj)->rebuildCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rebuildCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "rebuildCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_rebuildCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_blueprintClass = { UE4CodeGen_Private::EPropertyClass::Class, "blueprintClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms, blueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_replace_SetBit = [](void* Obj){ ((BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms*)Obj)->replace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_replace = { UE4CodeGen_Private::EPropertyClass::Bool, "replace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_replace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_layer = { UE4CodeGen_Private::EPropertyClass::Int, "layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms, layer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Int, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Int, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rebuildCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_blueprintClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_replace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_layer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
				{ "ToolTip", "Spawns an actor at the map position and then replaces the tile if necessary" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSpawnerComponent, "SpawnBlueprintAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BlueprintSpawnerComponent_eventSpawnBlueprintAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
				{ "ToolTip", "Spawn Blueprints defined in the current TileDataSets*" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSpawnerComponent, "SpawnBlueprints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprintsOnMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
				{ "ToolTip", "Spawn actors on the initialised map" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSpawnerComponent, "SpawnBlueprintsOnMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintSpawnerComponent_NoRegister()
	{
		return UBlueprintSpawnerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBlueprintSpawnerComponent_GetBlueprintTiles, "GetBlueprintTiles" }, // 2916514866
				{ &Z_Construct_UFunction_UBlueprintSpawnerComponent_GetBlueprintTilesFromLayer, "GetBlueprintTilesFromLayer" }, // 1280479460
				{ &Z_Construct_UFunction_UBlueprintSpawnerComponent_InitialiseSpawner, "InitialiseSpawner" }, // 4192236752
				{ &Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprintAt, "SpawnBlueprintAt" }, // 4280461050
				{ &Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprints, "SpawnBlueprints" }, // 2810027106
				{ &Z_Construct_UFunction_UBlueprintSpawnerComponent_SpawnBlueprintsOnMap, "SpawnBlueprintsOnMap" }, // 756458814
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Paper2D" },
				{ "IncludePath", "BlueprintSpawnerComponent.h" },
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMapComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMapComp = { UE4CodeGen_Private::EPropertyClass::Object, "TileMapComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UBlueprintSpawnerComponent, TileMapComp), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(NewProp_TileMapComp_MetaData, ARRAY_COUNT(NewProp_TileMapComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileDataSets_MetaData[] = {
				{ "Category", "Tile Blueprints" },
				{ "ModuleRelativePath", "Public/BlueprintSpawnerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileDataSets = { UE4CodeGen_Private::EPropertyClass::Array, "TileDataSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBlueprintSpawnerComponent, TileDataSets), METADATA_PARAMS(NewProp_TileDataSets_MetaData, ARRAY_COUNT(NewProp_TileDataSets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileDataSets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TileDataSets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTileBlueprintData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileMapComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileDataSets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileDataSets_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintSpawnerComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintSpawnerComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintSpawnerComponent, 1207954933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintSpawnerComponent(Z_Construct_UClass_UBlueprintSpawnerComponent, &UBlueprintSpawnerComponent::StaticClass, TEXT("/Script/PaperExpandedPlugin"), TEXT("UBlueprintSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
