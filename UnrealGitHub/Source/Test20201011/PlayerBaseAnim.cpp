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
	Super::NativeInitializeAnimation();	//�θ�Ŭ���� ȣ���ϱ����ؼ�
	
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
			
			//�����������
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
		//�ϴÿ������� 
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

//ù��°���ݿ��� ���� �Ѿ��������
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
		
		//�������ݰ���, ���������� ������������
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