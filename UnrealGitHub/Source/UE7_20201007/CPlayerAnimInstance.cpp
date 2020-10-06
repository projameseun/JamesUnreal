// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayerAnimInstance.h"

UCPlayerAnimInstance::UCPlayerAnimInstance()
{

}

//아래와같이 되면 이제 블루프린트클래스가 상속받을클래스를 제작은 된상태이다
void UCPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();	//언리얼에서 이함수가 부모클래스에있는 함수를 호출하기위해서 
										//부모클래스다 라는걸 아렬주기위해서 Super를만들어놓앗다

}

void UCPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{

	Super::NativeUpdateAnimation(DeltaSeconds);
}
