// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PaperExpandedPlugin.h"
#include "Public/PaperExpandedBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperExpandedBlueprintLibrary() {}
// Cross Module References
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UPaperExpandedBlueprintLibrary_NoRegister();
	PAPEREXPANDEDPLUGIN_API UClass* Z_Construct_UClass_UPaperExpandedBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PaperExpandedPlugin();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_GetTileFromHitLocation();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
	PAPEREXPANDEDPLUGIN_API UEnum* Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_GetTilePositionFromHitLocation();
	PAPEREXPANDEDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTilePosition();
	PAPEREXPANDEDPLUGIN_API UFunction* Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_IsSocketOnFrame();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void UPaperExpandedBlueprintLibrary::StaticRegisterNativesUPaperExpandedBlueprintLibrary()
	{
		UClass* Class = UPaperExpandedBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTileFromHitLocation", (Native)&UPaperExpandedBlueprintLibrary::execGetTileFromHitLocation },
			{ "GetTilePositionFromHitLocation", (Native)&UPaperExpandedBlueprintLibrary::execGetTilePositionFromHitLocation },
			{ "IsSocketOnFrame", (Native)&UPaperExpandedBlueprintLibrary::execIsSocketOnFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_GetTileFromHitLocation()
	{
		struct PaperExpandedBlueprintLibrary_eventGetTileFromHitLocation_Parms
		{
			EUpAxis axis;
			UPaperTileMapComponent* tilemapComp;
			FVector HitLocation;
			FPaperTileInfo ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTileFromHitLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTileFromHitLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tilemapComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tilemapComp = { UE4CodeGen_Private::EPropertyClass::Object, "tilemapComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTileFromHitLocation_Parms, tilemapComp), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(NewProp_tilemapComp_MetaData, ARRAY_COUNT(NewProp_tilemapComp_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_axis = { UE4CodeGen_Private::EPropertyClass::Enum, "axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTileFromHitLocation_Parms, axis), Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_axis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tilemapComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_axis_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Paper2D" },
				{ "ModuleRelativePath", "Public/PaperExpandedBlueprintLibrary.h" },
				{ "ToolTip", "Get Tile Paper Info From Hit Location, useful for working with LineTrace. Supports 3D Collision Only" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperExpandedBlueprintLibrary, "GetTileFromHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04842401, sizeof(PaperExpandedBlueprintLibrary_eventGetTileFromHitLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_GetTilePositionFromHitLocation()
	{
		struct PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms
		{
			EUpAxis axis;
			UPaperTileMapComponent* tilemapComp;
			FVector HitLocation;
			bool IgnoreCollisionThickness;
			FPaperTilePosition ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FPaperTilePosition, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IgnoreCollisionThickness_SetBit = [](void* Obj){ ((PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms*)Obj)->IgnoreCollisionThickness = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreCollisionThickness = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreCollisionThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IgnoreCollisionThickness_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tilemapComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tilemapComp = { UE4CodeGen_Private::EPropertyClass::Object, "tilemapComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms, tilemapComp), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(NewProp_tilemapComp_MetaData, ARRAY_COUNT(NewProp_tilemapComp_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_axis = { UE4CodeGen_Private::EPropertyClass::Enum, "axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms, axis), Z_Construct_UEnum_PaperExpandedPlugin_EUpAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_axis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IgnoreCollisionThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tilemapComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_axis_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Paper2D" },
				{ "CPP_Default_IgnoreCollisionThickness", "false" },
				{ "ModuleRelativePath", "Public/PaperExpandedBlueprintLibrary.h" },
				{ "ToolTip", "Get Tile Position From Hit Location, useful for working with LineTrace. Supports 3D Collision Only" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperExpandedBlueprintLibrary, "GetTilePositionFromHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04842401, sizeof(PaperExpandedBlueprintLibrary_eventGetTilePositionFromHitLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_IsSocketOnFrame()
	{
		struct PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms
		{
			const UPaperFlipbook* flipbook;
			FName socketName;
			int32 frameIndex;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameIndex_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_frameIndex = { UE4CodeGen_Private::EPropertyClass::Int, "frameIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms, frameIndex), METADATA_PARAMS(NewProp_frameIndex_MetaData, ARRAY_COUNT(NewProp_frameIndex_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_socketName = { UE4CodeGen_Private::EPropertyClass::Name, "socketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms, socketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flipbook_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flipbook = { UE4CodeGen_Private::EPropertyClass::Object, "flipbook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms, flipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_flipbook_MetaData, ARRAY_COUNT(NewProp_flipbook_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_frameIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_socketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_flipbook,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Paper2D" },
				{ "ModuleRelativePath", "Public/PaperExpandedBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperExpandedBlueprintLibrary, "IsSocketOnFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(PaperExpandedBlueprintLibrary_eventIsSocketOnFrame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperExpandedBlueprintLibrary_NoRegister()
	{
		return UPaperExpandedBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UPaperExpandedBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_PaperExpandedPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_GetTileFromHitLocation, "GetTileFromHitLocation" }, // 2857984677
				{ &Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_GetTilePositionFromHitLocation, "GetTilePositionFromHitLocation" }, // 4009610539
				{ &Z_Construct_UFunction_UPaperExpandedBlueprintLibrary_IsSocketOnFrame, "IsSocketOnFrame" }, // 3704428487
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PaperExpandedBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Public/PaperExpandedBlueprintLibrary.h" },
				{ "ToolTip", "Functions developed as part of the PaperExpanded plugin." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPaperExpandedBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPaperExpandedBlueprintLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UPaperExpandedBlueprintLibrary, 3630646418);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperExpandedBlueprintLibrary(Z_Construct_UClass_UPaperExpandedBlueprintLibrary, &UPaperExpandedBlueprintLibrary::StaticClass, TEXT("/Script/PaperExpandedPlugin"), TEXT("UPaperExpandedBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperExpandedBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
