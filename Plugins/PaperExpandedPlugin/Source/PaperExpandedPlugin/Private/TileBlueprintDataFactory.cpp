// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperExpandedPlugin.h"
#include "TileBlueprintDataFactory.h"

UTileBlueprintDataFactory::UTileBlueprintDataFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UTileBlueprintData::StaticClass();
}

UObject * UTileBlueprintDataFactory::FactoryCreateNew(UClass * Class, UObject * InParent, FName Name, EObjectFlags Flags, UObject * Context, FFeedbackContext * Warn)
{
	UTileBlueprintData* newDataObject = NewObject<UTileBlueprintData>(InParent, Class, Name, Flags | RF_Transactional);
	return newDataObject;
}
