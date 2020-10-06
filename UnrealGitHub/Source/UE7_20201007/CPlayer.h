// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
//#include "EngineMinimal.h"
//#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()	//��� �𸮾��� Ŭ������ UClass�� �ݵ�� �־�ߵȴ� �׷��� �𸮾󿡼� ����� Ŭ�������� �ν��Ѵ� 
			//�𸮾� Ŭ������ ���������� �������÷����� �����ִ�(�����Ҵ� ���������൵�ȴٴ°�) 
			//��, �츮�� �������� new �����Ҵ��� �ݵ�� �����ؾߵȴ�
			//https://docs.unrealengine.com/ko/Programming/UnrealArchitecture/Reference/Classes/Specifiers/index.html

			//UProPerty :https://docs.unrealengine.com/ko/Programming/UnrealArchitecture/Reference/Properties/index.html 
			//���� �Ӽ����� ����
class UE7_20201007_API ACPlayer : public ACharacter
{
	GENERATED_BODY()	//�𸮾󿡼� �⺻������ ���߰� �־�ߵ� ������� ��ũ�� �� ����� ���Ҵ�

public:
	// Sets default values for this character's properties
	ACPlayer();

protected:						 //EditAnywhere ������������			
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	UCameraComponent* Camera;

	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	USpringArmComponent* Arm;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveFront(float fScale);
	void MoveSide(float fScale);
	void RotationZ(float fScale);
	void Jumping();		//�׼Ǹ����� scale�� ���⶧���� ���ڰ� ���̸����

};
