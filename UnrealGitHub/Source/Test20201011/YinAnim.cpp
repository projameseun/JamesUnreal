// Fill out your copyright notice in the Description page of Project Settings.


#include "YinAnim.h"
#include "YinPlayer.h"

UYinAnim::UYinAnim()
{
	BaseAnimType = &AnimType;
	NextAttackEnable = true;
	NextAttackMax = 4;
}

void UYinAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();	//∫Œ∏≈¨∑°Ω∫ »£√‚«œ±‚¿ß«ÿº≠
}
void UYinAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	AYinPlayer* pOwner = Cast<AYinPlayer>(TryGetPawnOwner());

	if (IsValid(pOwner))
	{
		UCharacterMovementComponent* pMovement =
			pOwner->GetCharacterMovement();

		if (IsValid(pOwner))
		{
			//∂•π‡∞Ì¿’¿ª¥Î
			if (pMovement->IsMovingOnGround())
			{
				JumpStop = false;

				if (pMovement->Velocity.Size() > 0.f)
				{
					MoveStop = false;
					AnimType = (uint8)EYinAnim::Run;

				}
				else
				{
					MoveStop = true;

				}
			}
			//«œ¥√ø°¿’¿ª¥Î 
			else
			{
				//UE_LOG(LogTemp, Log, TEXT("Player FLY"));
				JumpStop = true;
			}



		}
	}

}

void UYinAnim::InheritMoveStopNotify()
{
}

void UYinAnim::InheritAttackEndNotify()
{
}

void UYinAnim::InheritInIdleNotify()
{
}

void UYinAnim::InheritNormalAttack()
{
}


