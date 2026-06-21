// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PluginCharacterData.generated.h"

/**
 *
 */
UCLASS()
class TEMPORARY_API UPluginCharacterData : public UObject
{
	GENERATED_BODY()
public:
	UPluginCharacterData();

	UPROPERTY(EditAnywhere, Category = "PluginStats")
	float MP;


	UPROPERTY(EditAnywhere, Category = "PluginStats")
	float Defense;
};
