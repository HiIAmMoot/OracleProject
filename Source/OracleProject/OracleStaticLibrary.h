// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "OracleStaticLibrary.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FBuildData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool HasEditor; //WITH_EDITOR
	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool IsDevelopment; //UE_BUILD_DEVELOPMENT
	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool IsTest; //UE_BUILD_TEST
	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool IsShipping; //UE_BUILD_SHIPPING
	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool IsDebug; //UE_BUILD_DEBUG
	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool IsServer; //UE_SERVER
	UPROPERTY(BlueprintReadOnly, category="Build Data")
	bool IsClient; //UE_CLIENT

	FBuildData()
	{
		#if WITH_EDITOR
			if (GIsEditor) HasEditor = true;
		#else
			HasEditor = false;
		#endif
		#if UE_BUILD_DEVELOPMENT
			IsDevelopment = true;
		#else
			IsDevelopment = false;
		#endif
		#if UE_BUILD_TEST
			IsTest = true;
		#else
			IsTest = false;
		#endif
		#if UE_BUILD_SHIPPING
			IsShipping = true;
		#else
			IsShipping = false;
		#endif
		#if UE_BUILD_DEBUG
			IsDebug = true;
		#else
			IsDebug = false;
		#endif
		#if UE_SERVER //TODO: don't assume this, there might be other types
			IsServer = true;
			IsClient = false;
		#else
			IsServer = false;
			IsClient = true;
		#endif
		IsServer = IsRunningDedicatedServer();
	}
};

UCLASS()
class UOracleStaticLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "OracleStaticLibrary")
	static FBuildData GetBuildData();

	UFUNCTION(BlueprintCallable, Category = "OracleStaticLibrary")
	static void EnableSplitscreen(UObject* context, bool enabled);
	
	/** returns a list of all save games in /Saved/SaveGames folder, without the .sav extension (filename only) */
	UFUNCTION(BlueprintPure, Category = "OracleStaticLibrary")
	static TArray<FString> GetAllSaveGameSlotNames();
		
	UFUNCTION(BlueprintPure, Category = "OracleStaticLibrary")
	static bool CheckIfInEditor();

	UFUNCTION(BlueprintCallable, Category = "OracleStaticLibrary|Config")
	static bool IsInMobilePreview();

	/*	Blueprints does not support int64 so at some point in future int32 will not be enough */
	UFUNCTION(BlueprintPure, Category = "OracleStaticLibrary|System")
	static int32 GetUnixTimeStamp(const FDateTime& UTCTime)
	{
		//Please note it should really be int64 but that is not supported by BP yet
		return UTCTime.ToUnixTimestamp();
	}

	/* Blueprints does not support int64 so at some point in future int32 will not be enough  */
	UFUNCTION(BlueprintPure, Category = "OracleStaticLibrary|System")
	static void GetUTCFromUnixTimeStamp(int32 UnixTimeStamp, FDateTime& UTCTime)
	{
		//Please note it should really be int64 but that's not supported by BP yet
		UTCTime = FDateTime::FromUnixTimestamp(UnixTimeStamp);
	}

	/* Adds a component to an actor*/
	UFUNCTION(BlueprintCallable, Category = "OracleStaticLibrary|Component")
	static UActorComponent* AddActorComponentFromClass(AActor* Actor, UClass* ActorComponentClass);

};
