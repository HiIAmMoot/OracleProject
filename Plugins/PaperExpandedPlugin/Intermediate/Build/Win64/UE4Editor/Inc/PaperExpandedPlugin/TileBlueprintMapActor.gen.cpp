// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PaperExpandedPlugin.h"
#include "Public/TileBlueprintMapActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBlueprintMapActor() {}
// Cross Module References
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_ATileBlueprintMapActor_NoRegister();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_ATileBlueprintMapActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PaperExpandedPlugin();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UBlueprintSpawnerComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
// End Cross Module References
	void ATileBlueprintMapActor::StaticRegisterNativesATileBlueprintMapActor()
	{
	}
	UClass* Z_Construct_UClass_ATileBlueprintMapActor_NoRegister()
	{
		return ATileBlueprintMapActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ATileBlueprintMapActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "TileBlueprintMapActor.h" },
				{ "ModuleRelativePath", "Public/TileBlueprintMapActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerComponent_MetaData[] = {
				{ "Category", "Tile Blueprints" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/TileBlueprintMapActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008080d, 1, nullptr, STRUCT_OFFSET(ATileBlueprintMapActor, SpawnerComponent), Z_Construct_UClass_UBlueprintSpawnerComponent_NoRegister, METADATA_PARAMS(NewProp_SpawnerComponent_MetaData, ARRAY_COUNT(NewProp_SpawnerComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMapComponent_MetaData[] = {
				{ "Category", "Tile Blueprints" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/TileBlueprintMapActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMapComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TileMapComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008080d, 1, nullptr, STRUCT_OFFSET(ATileBlueprintMapActor, TileMapComponent), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(NewProp_TileMapComponent_MetaData, ARRAY_COUNT(NewProp_TileMapComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnerComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileMapComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATileBlueprintMapActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATileBlueprintMapActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ATileBlueprintMapActor, 1387608855);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileBlueprintMapActor(Z_Construct_UClass_ATileBlueprintMapActor, &ATileBlueprintMapActor::StaticClass, TEXT("/Script/PaperExpandedPlugin"), TEXT("ATileBlueprintMapActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileBlueprintMapActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
