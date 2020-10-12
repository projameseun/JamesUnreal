// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBaseAnim.h"
#include "PlayerCharacter.h"

UPlayerBaseAnim::UPlayerBaseAnim()
{
	
	Dir = (uint8)EDir::Front;
	MoveStop = true;
	JumpStop = true;
	AttackEnable = true;
	NextAttackEnable = false;
	NextAttack = false;
	NextAttackInputEnable = false;
	NextAttackMax = 0;
	NextAttackIndex = 0;
}

void UPlayerBaseAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();	//부모클래스 호출하기위해서
	
	*BaseAnimType = (uint8)EPlayerBaseAnim::Idle;
}
void UPlayerBaseAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APlayerCharacter* pOwner = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (IsValid(pOwner))
	{
		UCharacterMovementComponent* pMovement =
			pOwner->GetCharacterMovement();

		if (IsValid(pOwner))
		{
			
			//땅밝고잇을대
			if (pMovement->IsMovingOnGround())
			{
				JumpStop = false;
				if (pMovement->Velocity.Size() > 0.f)
				{
					MoveStop = false;
					*BaseAnimType = (uint8)EPlayerBaseAnim::Run;
				}
				else
				{
					MoveStop = true;
				}
			}
		}
		//하늘에잇을대 
		else
		{
			//UE_LOG(LogTemp, Log, TEXT("Player FLY"));
			JumpStop = true;
		}
	}

}

//NotiFy


void UPlayerBaseAnim::AnimNotify_MoveStop()
{
	*BaseAnimType = (uint8)EPlayerBaseAnim::Idle;

	InheritMoveStopNotify();
}

void UPlayerBaseAnim::AnimNotify_InIdle()
{
	AttackEnable = true;

	InheritInIdleNotify();
}

//첫번째공격에서 연속 넘어갈수잇을대
void UPlayerBaseAnim::AnimNotify_NextAttackEnd()
{
	if (NextAttack)
	{
		++NextAttackIndex;
		
		if (NextAttackIndex >= NextAttackMax)
			NextAttackIndex = 0;

		NextAttack = false;
	}

	else
	{
		NextAttackInputEnable = false;
	}
}

void UPlayerBaseAnim::AnimNotify_AttackEnd()
{
	*BaseAnimType = (uint8)EPlayerBaseAnim::Idle;

	NextAttackInputEnable = false;
	NextAttackIndex = 0;
	NextAttack = false;

	InheritAttackEndNotify();
}

void UPlayerBaseAnim::AnimNotify_JumpEnd()
{
	*BaseAnimType = (uint8)EPlayerBaseAnim::Idle;
}


void UPlayerBaseAnim::NormalAttack()
{
	if (AttackEnable)
	{
		*BaseAnimType = (uint8)EPlayerBaseAnim::Attack;
		
		//다음공격가능, 다음공격을 누를수잇을대
		if (NextAttackEnable && NextAttackInputEnable)
		{
			NextAttack = true;
		}
		else if (!NextAttackEnable)
			AttackEnable = false;

		NextAttackInputEnable = true;
	}

	InheritNormalAttack();

}

void UPlayerBaseAnim::NormalJumping()
{
	*BaseAnimType = (uint8)EPlayerBaseAnim::Jump;
}


void UPlayerBaseAnim::InheritMoveStopNotify()
{

}
void UPlayerBaseAnim::InheritAttackEndNotify()
{

}
void UPlayerBaseAnim::InheritInIdleNotify()
{

}
void UPlayerBaseAnim::InheritNormalAttack()
{

}