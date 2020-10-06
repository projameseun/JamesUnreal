// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayer.h"

// Sets default values
ACPlayer::ACPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//ī�޶� ������Ʈ ���� �����ڿ��� �ؾߵǰ� �ݵ�� �̸��� �־���ߵȴ�.
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));

	//arm ��ī������ �������̶�� ����ȴ� .	arm���ٰ� ī�޶� �ٴ� �����̶�� �����
	Arm->SetupAttachment(GetMesh());		
	Camera->SetupAttachment(Arm);	//�𸮾��� �ڽ�������Ʈ�� ���� �θ� �������ִ� ����̴�
										//�̷����ϸ� ī�޶��� �θ�� �޽��� �����ϰڴ� ��� �� 

	//����
	//CharacterMovement �� ����ͼ� �����Ҽ� �ִ� 
	//������ �ӵ��� �����Ͽ� ������ �ð����� ���̸� �����Ҽ� �ִ�. ==> Jump() �ٷ� ���Լ����� ó���� �ǰ��ִ°Ŵ�
	//GetCharacterMovement()->JumpZVelocity;
}

// Called when the game starts or when spawned
void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//�𸮾��� Unicode������� 
	//�̸� , �ڱ��ڽ�,����Լ�������
	PlayerInputComponent->BindAxis(TEXT("MoveFront"), this,
		&ACPlayer::MoveFront);

	PlayerInputComponent->BindAxis(TEXT("MoveSide"), this,
		&ACPlayer::MoveSide);

	PlayerInputComponent->BindAxis(TEXT("RotationZ"), this,
		&ACPlayer::RotationZ);

	//����
	//�̸�,�̳�Ŭ����,�ڽ�,�Լ�������
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this,
		&ACPlayer::Jumping);

}

void ACPlayer::MoveFront(float fScale)
{
	//pawn class������ �𸮾��� �ڱ��ڽ��� ���溤�� ����Ʈ���͵� �̹̾˰��ִ�
	AddMovementInput(GetActorForwardVector(), fScale);
}

void ACPlayer::MoveSide(float fScale)
{
	AddMovementInput(GetActorRightVector(), fScale);
}

void ACPlayer::RotationZ(float fScale)
{
	AddControllerYawInput(fScale);
}

void ACPlayer::Jumping()
{
	//����
	//CharacterMovement �� ����ͼ� �����Ҽ� �ִ� 
	//������ �ӵ��� �����Ͽ� ������ �ð����� ���̸� �����Ҽ� �ִ�. ==> Jump() �ٷ� ���Լ����� ó���� �ǰ��ִ°Ŵ�
	//GetCharacterMovement()->JumpZVelocity;
	Jump();
}

