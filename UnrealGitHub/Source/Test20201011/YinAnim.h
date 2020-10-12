// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "PlayerBaseAnim.h"
#include "YinAnim.generated.h"

UENUM(BlueprintType, Meta = (Bitflags))
enum class EYinAnim : uint8
{
	Idle,
	Run,
	Attack,
	Hit,
	Jump
};

UCLASS()
class TEST20201011_API UYinAnim : public UPlayerBaseAnim
{
	GENERATED_BODY()

public:
	UYinAnim();

public:
	void SetMoveDir(EDir eDir)
	{
		Dir = (uint8)eDir;
	}

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true", Bitmask, BitmaskEnum = "EYinAnim"))
	uint8 AnimType;

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);
	
public:
	virtual void InheritMoveStopNotify();
	virtual void InheritAttackEndNotify();
	virtual void InheritInIdleNotify();
	virtual void InheritNormalAttack();

};
