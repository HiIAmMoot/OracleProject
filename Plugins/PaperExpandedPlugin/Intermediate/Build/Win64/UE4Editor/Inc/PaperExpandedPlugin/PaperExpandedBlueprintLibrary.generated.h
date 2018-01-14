// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperFlipbook;
enum class EUpAxis : uint8;
class UPaperTileMapComponent;
struct FVector;
struct FPaperTileInfo;
struct FPaperTilePosition;
#ifdef PAPEREXPANDEDPLUGIN_PaperExpandedBlueprintLibrary_generated_h
#error "PaperExpandedBlueprintLibrary.generated.h already included, missing '#pragma once' in PaperExpandedBlueprintLibrary.h"
#endif
#define PAPEREXPANDEDPLUGIN_PaperExpandedBlueprintLibrary_generated_h

#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSocketOnFrame) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_flipbook); \
		P_GET_PROPERTY(UNameProperty,Z_Param_socketName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_frameIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPaperExpandedBlueprintLibrary::IsSocketOnFrame(Z_Param_flipbook,Z_Param_socketName,Z_Param_frameIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileFromHitLocation) \
	{ \
		P_GET_ENUM(EUpAxis,Z_Param_axis); \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tilemapComp); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPaperTileInfo*)Z_Param__Result=UPaperExpandedBlueprintLibrary::GetTileFromHitLocation(EUpAxis(Z_Param_axis),Z_Param_tilemapComp,Z_Param_HitLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTilePositionFromHitLocation) \
	{ \
		P_GET_ENUM(EUpAxis,Z_Param_axis); \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tilemapComp); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_UBOOL(Z_Param_IgnoreCollisionThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPaperTilePosition*)Z_Param__Result=UPaperExpandedBlueprintLibrary::GetTilePositionFromHitLocation(EUpAxis(Z_Param_axis),Z_Param_tilemapComp,Z_Param_HitLocation,Z_Param_IgnoreCollisionThickness); \
		P_NATIVE_END; \
	}


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSocketOnFrame) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_flipbook); \
		P_GET_PROPERTY(UNameProperty,Z_Param_socketName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_frameIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPaperExpandedBlueprintLibrary::IsSocketOnFrame(Z_Param_flipbook,Z_Param_socketName,Z_Param_frameIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileFromHitLocation) \
	{ \
		P_GET_ENUM(EUpAxis,Z_Param_axis); \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tilemapComp); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPaperTileInfo*)Z_Param__Result=UPaperExpandedBlueprintLibrary::GetTileFromHitLocation(EUpAxis(Z_Param_axis),Z_Param_tilemapComp,Z_Param_HitLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTilePositionFromHitLocation) \
	{ \
		P_GET_ENUM(EUpAxis,Z_Param_axis); \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tilemapComp); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_UBOOL(Z_Param_IgnoreCollisionThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPaperTilePosition*)Z_Param__Result=UPaperExpandedBlueprintLibrary::GetTilePositionFromHitLocation(EUpAxis(Z_Param_axis),Z_Param_tilemapComp,Z_Param_HitLocation,Z_Param_IgnoreCollisionThickness); \
		P_NATIVE_END; \
	}


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperExpandedBlueprintLibrary(); \
	friend PAPEREXPANDEDPLUGIN_API class UClass* Z_Construct_UClass_UPaperExpandedBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UPaperExpandedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaperExpandedPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPaperExpandedBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPaperExpandedBlueprintLibrary(); \
	friend PAPEREXPANDEDPLUGIN_API class UClass* Z_Construct_UClass_UPaperExpandedBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UPaperExpandedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaperExpandedPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPaperExpandedBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperExpandedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperExpandedBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperExpandedBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperExpandedBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperExpandedBlueprintLibrary(UPaperExpandedBlueprintLibrary&&); \
	NO_API UPaperExpandedBlueprintLibrary(const UPaperExpandedBlueprintLibrary&); \
public:


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperExpandedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperExpandedBlueprintLibrary(UPaperExpandedBlueprintLibrary&&); \
	NO_API UPaperExpandedBlueprintLibrary(const UPaperExpandedBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperExpandedBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperExpandedBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperExpandedBlueprintLibrary)


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_11_PROLOG
#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_RPC_WRAPPERS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_INCLASS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_PaperExpandedBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
