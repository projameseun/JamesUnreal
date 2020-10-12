// Fill out your copyright notice in the Description page of Project Settings.


#include "ShinbiAnim.h"
#include "PlayerShinbi.h"

UShinbiAnim::UShinbiAnim()
{
	BaseAnimType = &AnimType;
	NextAttackEnable = true;
	NextAttackMax = 3;
}

void UShinbiAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();	//�θ�Ŭ���� ȣ���ϱ����ؼ�
}
void UShinbiAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APlayerShinbi* pOwner = Cast<APlayerShinbi>(TryGetPawnOwner());

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
					AnimType = (uint8)EShinbiAnim::Run;
					
				}
				else
				{
					MoveStop = true;
					
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

}

void UShinbiAnim::InheritMoveStopNotify()
{
}

void UShinbiAnim::InheritAttackEndNotify()
{
}

void UShinbiAnim::InheritInIdleNotify()
{
}

void UShinbiAnim::InheritNormalAttack()
{
}