// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModuleCharacterData.generated.h"

/**
 *
 */
UCLASS()
class TEST_API UModuleCharacterData : public UObject
{
	GENERATED_BODY()
public:
	// 생성자 선언 (초기값을 설정하기 위해 필요합니다)
	UModuleCharacterData();

	// 체력 데이터
	UPROPERTY(EditAnywhere, Category = "Stats")
	float Hp;

	// 공격력 데이터
	UPROPERTY(EditAnywhere, Category = "Stats")
	float Power;
};
