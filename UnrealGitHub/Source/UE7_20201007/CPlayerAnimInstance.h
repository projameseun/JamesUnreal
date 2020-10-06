// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
//#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CPlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE7_20201007_API UCPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UCPlayerAnimInstance();
	
public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);
};
