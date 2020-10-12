// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Animation/AnimInstance.h"
#include "PlayerBaseAnim.generated.h"

UENUM(BlueprintType, Meta = (Bitflags))
enum class EPlayerBaseAnim : uint8
{
	Idle,
	Run,
	Attack,
	Hit,
	Jump
};


UCLASS()
class TEST20201011_API UPlayerBaseAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPlayerBaseAnim();

public:
	void SetMoveDir(EDir eDir)
	{
		Dir = (uint8)eDir;
	}

protected:

	uint8* BaseAnimType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true", Bitmask, BitmaskEnum = "EDir"))
	uint8 Dir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"))
	bool MoveStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"))
	bool JumpStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"))
	bool AttackEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"))
	uint8	NextAttackIndex;

	uint8	NextAttackMax;
	bool	NextAttackEnable;
	bool	NextAttack;
	bool	NextAttackInputEnable;

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	UFUNCTION()
		void AnimNotify_MoveStop();

	UFUNCTION()
		void AnimNotify_AttackEnd();

	UFUNCTION()
		void AnimNotify_InIdle();

	UFUNCTION()
		void AnimNotify_NextAttackEnd();

	UFUNCTION()
		void AnimNotify_JumpEnd();

public:
	void NormalAttack();
	void NormalJumping();

public:
	virtual void InheritMoveStopNotify();
	virtual void InheritAttackEndNotify();
	virtual void InheritInIdleNotify();
	virtual void InheritNormalAttack();
	
};
