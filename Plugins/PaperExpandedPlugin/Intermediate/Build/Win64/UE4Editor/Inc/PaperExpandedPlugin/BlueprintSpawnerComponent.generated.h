// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperTileMapComponent;
class AActor;
class UPaperTileLayer;
class UTileBlueprintData;
#ifdef PAPEREXPANDEDPLUGIN_BlueprintSpawnerComponent_generated_h
#error "BlueprintSpawnerComponent.generated.h already included, missing '#pragma once' in BlueprintSpawnerComponent.h"
#endif
#define PAPEREXPANDEDPLUGIN_BlueprintSpawnerComponent_generated_h

#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBlueprintsOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnBlueprintsOnMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialiseSpawner) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitialiseSpawner(Z_Param_component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBlueprintAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layer); \
		P_GET_UBOOL(Z_Param_replace); \
		P_GET_OBJECT(UClass,Z_Param_blueprintClass); \
		P_GET_UBOOL(Z_Param_rebuildCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnBlueprintAt(Z_Param_x,Z_Param_y,Z_Param_layer,Z_Param_replace,Z_Param_blueprintClass,Z_Param_rebuildCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintTilesFromLayer) \
	{ \
		P_GET_OBJECT(UPaperTileLayer,Z_Param_layer); \
		P_GET_OBJECT(UTileBlueprintData,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetBlueprintTilesFromLayer(Z_Param_layer,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintTiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetBlueprintTiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBlueprints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnBlueprints(); \
		P_NATIVE_END; \
	}


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBlueprintsOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnBlueprintsOnMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialiseSpawner) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitialiseSpawner(Z_Param_component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBlueprintAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layer); \
		P_GET_UBOOL(Z_Param_replace); \
		P_GET_OBJECT(UClass,Z_Param_blueprintClass); \
		P_GET_UBOOL(Z_Param_rebuildCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnBlueprintAt(Z_Param_x,Z_Param_y,Z_Param_layer,Z_Param_replace,Z_Param_blueprintClass,Z_Param_rebuildCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintTilesFromLayer) \
	{ \
		P_GET_OBJECT(UPaperTileLayer,Z_Param_layer); \
		P_GET_OBJECT(UTileBlueprintData,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetBlueprintTilesFromLayer(Z_Param_layer,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintTiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetBlueprintTiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBlueprints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnBlueprints(); \
		P_NATIVE_END; \
	}


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintSpawnerComponent(); \
	friend PAPEREXPANDEDPLUGIN_API class UClass* Z_Construct_UClass_UBlueprintSpawnerComponent(); \
public: \
	DECLARE_CLASS(UBlueprintSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaperExpandedPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintSpawnerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintSpawnerComponent(); \
	friend PAPEREXPANDEDPLUGIN_API class UClass* Z_Construct_UClass_UBlueprintSpawnerComponent(); \
public: \
	DECLARE_CLASS(UBlueprintSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaperExpandedPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintSpawnerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintSpawnerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintSpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintSpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintSpawnerComponent(UBlueprintSpawnerComponent&&); \
	NO_API UBlueprintSpawnerComponent(const UBlueprintSpawnerComponent&); \
public:


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintSpawnerComponent(UBlueprintSpawnerComponent&&); \
	NO_API UBlueprintSpawnerComponent(const UBlueprintSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintSpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintSpawnerComponent)


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_9_PROLOG
#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_RPC_WRAPPERS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_INCLASS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_INCLASS_NO_PURE_DECLS \
	OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OracleProject_Plugins_PaperExpandedPlugin_Source_PaperExpandedPlugin_Public_BlueprintSpawnerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
