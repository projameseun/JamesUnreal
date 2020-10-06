// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"	//GameMode를 만들대 이게 더 유용하다
//#include "CoreMinimal.h" 언리얼에서 기본으로 제공해주는 모드
#include "GameFramework/GameModeBase.h"
#include "MainGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE7_20201007_API AMainGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMainGameModeBase();
	
};
