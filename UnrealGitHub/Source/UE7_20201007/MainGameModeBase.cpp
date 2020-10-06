// Fill out your copyright notice in the Description page of Project Settings.

//�𸮾󿡼� A���տ� ������ Actor // U�� �پ������� Component , �Ϲݱ�� Ŭ�����̴� // ����ü�� F�����δ�


#include "MainGameModeBase.h"
#include "CPlayer.h" //BpŬ������ CPlayer�� ��ӹް� �ִ� ����� �׷��� �����´� 

AMainGameModeBase::AMainGameModeBase()
{
	//�÷��̾�� ����� �������Ʈ Ŭ������ UCLASS ������ ���´�
	//�̱���� �����ڿ����� ����� �����ϴ�.
	//FObjectFinder  =>���� ��ü�� �������ִ� ���
	//FClassFinder  =>�̳��� � Ŭ���� Ÿ�������� ���� ������ ������ش�
	//���� �̵ΰ��� ConstructorHelpers�� �����Ѵ�
	static ConstructorHelpers::FClassFinder<ACPlayer>	PlayerClass(TEXT("Blueprint'/Game/Player/Bp_CPlayer.Bp_CPlayer_C'"));	//��δ� ��������ó�����������
		//_C Ŭ�����������鶧 ���ٿ��ߵȴ� �߿�

	if (PlayerClass.Succeeded())	//�����ߴ��� 
		DefaultPawnClass = PlayerClass.Class;	//�̷��� �����ϸ� �̰��Ӹ�带 ����ϴ� �ִ� �⺻�÷��̾� ��Ŭ������ �ָ� ����ϰԵȴ�
}