// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UnrealEd.h"
#include "TileBlueprintDataFactory.generated.h"


UCLASS(ClassGroup = (Paper2D))
class PAPEREXPANDEDPLUGIN_API UTileBlueprintDataFactory : public UFactory
{
	GENERATED_BODY()
	UTileBlueprintDataFactory(const FObjectInitializer& ObjectInitializer);

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
