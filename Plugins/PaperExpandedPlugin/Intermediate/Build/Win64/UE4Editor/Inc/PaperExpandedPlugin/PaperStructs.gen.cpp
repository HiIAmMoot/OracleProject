// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PaperExpandedPlugin.h"
#include "Public/PaperStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperStructs() {}
// Cross Module References
	PAPEREXPANDEDPLUGIN_API UEnum* Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis();
	UPackage* Z_Construct_UPackage__Script_PaperExpandedPlugin();
	PAPEREXPANDEDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTilePosition();
	PAPEREXPANDEDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTilePrefab();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UTileBlueprintData_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
// End Cross Module References
	static UEnum* EUpAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis, Z_Construct_UPackage__Script_PaperExpandedPlugin(), TEXT("EUpAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpAxis(EUpAxis_StaticEnum, TEXT("/Script/PaperExpandedPlugin"), TEXT("EUpAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis_CRC() { return 2638709787U; }
	UEnum* Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PaperExpandedPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpAxis"), 0, Get_Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpAxis::UA_Y", (int64)EUpAxis::UA_Y },
				{ "EUpAxis::UA_Z", (int64)EUpAxis::UA_Z },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
				{ "UA_Y.DisplayName", "Y Axis" },
				{ "UA_Z.DisplayName", "Z Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EUpAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EUpAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPaperTilePosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPEREXPANDEDPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPaperTilePosition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTilePosition, Z_Construct_UPackage__Script_PaperExpandedPlugin(), TEXT("PaperTilePosition"), sizeof(FPaperTilePosition), Get_Z_Construct_UScriptStruct_FPaperTilePosition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperTilePosition(FPaperTilePosition::StaticStruct, TEXT("/Script/PaperExpandedPlugin"), TEXT("PaperTilePosition"), false, nullptr, nullptr);
static struct FScriptStruct_PaperExpandedPlugin_StaticRegisterNativesFPaperTilePosition
{
	FScriptStruct_PaperExpandedPlugin_StaticRegisterNativesFPaperTilePosition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperTilePosition")),new UScriptStruct::TCppStructOps<FPaperTilePosition>);
	}
} ScriptStruct_PaperExpandedPlugin_StaticRegisterNativesFPaperTilePosition;
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTilePosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperTilePosition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PaperExpandedPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperTilePosition"), sizeof(FPaperTilePosition), Get_Z_Construct_UScriptStruct_FPaperTilePosition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTilePosition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
				{ "Category", "PaperTilePosition" },
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer = { UE4CodeGen_Private::EPropertyClass::Int, "Layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPaperTilePosition, Layer), METADATA_PARAMS(NewProp_Layer_MetaData, ARRAY_COUNT(NewProp_Layer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "PaperTilePosition" },
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPaperTilePosition, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "PaperTilePosition" },
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPaperTilePosition, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PaperTilePosition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPaperTilePosition),
				alignof(FPaperTilePosition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperTilePosition_CRC() { return 3745853413U; }
class UScriptStruct* FPaperTilePrefab::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPEREXPANDEDPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPaperTilePrefab_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTilePrefab, Z_Construct_UPackage__Script_PaperExpandedPlugin(), TEXT("PaperTilePrefab"), sizeof(FPaperTilePrefab), Get_Z_Construct_UScriptStruct_FPaperTilePrefab_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperTilePrefab(FPaperTilePrefab::StaticStruct, TEXT("/Script/PaperExpandedPlugin"), TEXT("PaperTilePrefab"), false, nullptr, nullptr);
static struct FScriptStruct_PaperExpandedPlugin_StaticRegisterNativesFPaperTilePrefab
{
	FScriptStruct_PaperExpandedPlugin_StaticRegisterNativesFPaperTilePrefab()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperTilePrefab")),new UScriptStruct::TCppStructOps<FPaperTilePrefab>);
	}
} ScriptStruct_PaperExpandedPlugin_StaticRegisterNativesFPaperTilePrefab;
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTilePrefab()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperTilePrefab_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PaperExpandedPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperTilePrefab"), sizeof(FPaperTilePrefab), Get_Z_Construct_UScriptStruct_FPaperTilePrefab_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
				{ "ToolTip", "X: X position in tilemap\nY: Y position in tilemap\nlayerIndex: Layer that the tile is on\ninfo: the Tile Info this tile has" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTilePrefab>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSet_MetaData[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataSet = { UE4CodeGen_Private::EPropertyClass::Object, "DataSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaperTilePrefab, DataSet), Z_Construct_UClass_UTileBlueprintData_NoRegister, METADATA_PARAMS(NewProp_DataSet_MetaData, ARRAY_COUNT(NewProp_DataSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSet = { UE4CodeGen_Private::EPropertyClass::Object, "TileSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaperTilePrefab, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(NewProp_TileSet_MetaData, ARRAY_COUNT(NewProp_TileSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info = { UE4CodeGen_Private::EPropertyClass::Struct, "Info", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaperTilePrefab, Info), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(NewProp_Info_MetaData, ARRAY_COUNT(NewProp_Info_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaperTilePrefab, LayerIndex), METADATA_PARAMS(NewProp_LayerIndex_MetaData, ARRAY_COUNT(NewProp_LayerIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaperTilePrefab, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "ModuleRelativePath", "Public/PaperStructs.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaperTilePrefab, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Info,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PaperTilePrefab",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPaperTilePrefab),
				alignof(FPaperTilePrefab),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperTilePrefab_CRC() { return 1602329661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
