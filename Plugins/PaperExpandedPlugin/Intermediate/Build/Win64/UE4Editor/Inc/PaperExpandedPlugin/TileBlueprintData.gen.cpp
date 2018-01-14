// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PaperExpandedPlugin.h"
#include "Public/TileBlueprintData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBlueprintData() {}
// Cross Module References
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UTileBlueprintData_NoRegister();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UTileBlueprintData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PaperExpandedPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
// End Cross Module References
	void UTileBlueprintData::StaticRegisterNativesUTileBlueprintData()
	{
	}
	UClass* Z_Construct_UClass_UTileBlueprintData_NoRegister()
	{
		return UTileBlueprintData::StaticClass();
	}
	UClass* Z_Construct_UClass_UTileBlueprintData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Paper2D" },
				{ "IncludePath", "TileBlueprintData.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TileBlueprintData.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blueprints_MetaData[] = {
				{ "Category", "Tile Blueprints" },
				{ "ModuleRelativePath", "Public/TileBlueprintData.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Blueprints = { UE4CodeGen_Private::EPropertyClass::Map, "Blueprints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UTileBlueprintData, Blueprints), METADATA_PARAMS(NewProp_Blueprints_MetaData, ARRAY_COUNT(NewProp_Blueprints_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Blueprints_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "Blueprints_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Blueprints_ValueProp = { UE4CodeGen_Private::EPropertyClass::Class, "Blueprints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000001, 1, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[] = {
				{ "Category", "Tile Blueprints" },
				{ "ModuleRelativePath", "Public/TileBlueprintData.h" },
			};
#endif
			auto NewProp_Replace_SetBit = [](void* Obj){ ((UTileBlueprintData*)Obj)->Replace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Replace = { UE4CodeGen_Private::EPropertyClass::Bool, "Replace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTileBlueprintData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Replace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Replace_MetaData, ARRAY_COUNT(NewProp_Replace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[] = {
				{ "Category", "Tile Blueprints" },
				{ "ModuleRelativePath", "Public/TileBlueprintData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSet = { UE4CodeGen_Private::EPropertyClass::Object, "TileSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTileBlueprintData, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(NewProp_TileSet_MetaData, ARRAY_COUNT(NewProp_TileSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blueprints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blueprints_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blueprints_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Replace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileSet,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTileBlueprintData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTileBlueprintData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UTileBlueprintData, 11816767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileBlueprintData(Z_Construct_UClass_UTileBlueprintData, &UTileBlueprintData::StaticClass, TEXT("/Script/PaperExpandedPlugin"), TEXT("UTileBlueprintData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileBlueprintData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
