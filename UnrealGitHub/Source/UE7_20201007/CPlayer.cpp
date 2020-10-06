// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayer.h"

// Sets default values
ACPlayer::ACPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//카메라 컴포넌트 생성 생성자에서 해야되고 반드시 이름을 넣어줘야된다.
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));

	//arm 셀카봉에서 봉역할이라고 보면된다 .	arm에다가 카메라를 다는 형식이라고 보면됨
	Arm->SetupAttachment(GetMesh());		
	Camera->SetupAttachment(Arm);	//언리얼은 자식컴포넌트가 나의 부모를 지정해주는 방식이다
										//이렇게하면 카메라의 부모로 메쉬를 지정하겠다 라는 말 

	//점프
	//CharacterMovement 를 갖고와서 점프할수 있다 
	//점프의 속도를 조절하여 점프시 올가가는 높이를 조절할수 있다. ==> Jump() 바로 이함수에서 처리가 되고있는거다
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

	//언리얼은 Unicode를사용함 
	//이름 , 자기자신,멤버함수포인터
	PlayerInputComponent->BindAxis(TEXT("MoveFront"), this,
		&ACPlayer::MoveFront);

	PlayerInputComponent->BindAxis(TEXT("MoveSide"), this,
		&ACPlayer::MoveSide);

	PlayerInputComponent->BindAxis(TEXT("RotationZ"), this,
		&ACPlayer::RotationZ);

	//점프
	//이름,이넘클래스,자신,함수포인터
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this,
		&ACPlayer::Jumping);

}

void ACPlayer::MoveFront(float fScale)
{
	//pawn class에잇음 언리얼은 자기자신의 전방벡터 라이트백터등 이미알고있다
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
	//점프
	//CharacterMovement 를 갖고와서 점프할수 있다 
	//점프의 속도를 조절하여 점프시 올가가는 높이를 조절할수 있다. ==> Jump() 바로 이함수에서 처리가 되고있는거다
	//GetCharacterMovement()->JumpZVelocity;
	Jump();
}

