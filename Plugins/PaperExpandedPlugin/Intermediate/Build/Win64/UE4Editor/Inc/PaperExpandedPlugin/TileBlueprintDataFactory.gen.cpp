// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PaperExpandedPlugin.h"
#include "Public/TileBlueprintDataFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBlueprintDataFactory() {}
// Cross Module References
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UTileBlueprintDataFactory_NoRegister();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UTileBlueprintDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PaperExpandedPlugin();
// End Cross Module References
	void UTileBlueprintDataFactory::StaticRegisterNativesUTileBlueprintDataFactory()
	{
	}
	UClass* Z_Construct_UClass_UTileBlueprintDataFactory_NoRegister()
	{
		return UTileBlueprintDataFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UTileBlueprintDataFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Paper2D" },
				{ "IncludePath", "TileBlueprintDataFactory.h" },
				{ "ModuleRelativePath", "Public/TileBlueprintDataFactory.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTileBlueprintDataFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTileBlueprintDataFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileBlueprintDataFactory, 2627877786);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileBlueprintDataFactory(Z_Construct_UClass_UTileBlueprintDataFactory, &UTileBlueprintDataFactory::StaticClass, TEXT("/Script/PaperExpandedPlugin"), TEXT("UTileBlueprintDataFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileBlueprintDataFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
