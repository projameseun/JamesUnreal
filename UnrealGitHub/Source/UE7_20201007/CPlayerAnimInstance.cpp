// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayerAnimInstance.h"

UCPlayerAnimInstance::UCPlayerAnimInstance()
{

}

//�Ʒ��Ͱ��� �Ǹ� ���� �������ƮŬ������ ��ӹ���Ŭ������ ������ �Ȼ����̴�
void UCPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();	//�𸮾󿡼� ���Լ��� �θ�Ŭ�������ִ� �Լ��� ȣ���ϱ����ؼ� 
										//�θ�Ŭ������ ��°� �Ʒ��ֱ����ؼ� Super���������Ѵ�

}

void UCPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{

	Super::NativeUpdateAnimation(DeltaSeconds);
}
