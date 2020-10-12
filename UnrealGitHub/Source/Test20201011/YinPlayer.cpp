// Fill out your copyright notice in the Description page of Project Settings.


#include "YinPlayer.h"
#include "YinAnim.h"


// Sets default values
AYinPlayer::AYinPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	Arm->SetupAttachment(GetMesh());
	Camera->SetupAttachment(Arm);

	//애니메이션 클래스지정
	//AnimAsset(TEXT("AnimBlueprint'/Game/Player/BPWukongAnim.BPWukongAnim_C'"));
	static ConstructorHelpers::FClassFinder<UYinAnim>	AnimAsset(TEXT("AnimBlueprint'/Game/Player/Bp_YinAnim.Bp_YinAnim_C'"));

	if (AnimAsset.Succeeded())
	{

		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);
	}

}

// Called when the game starts or when spawned
void AYinPlayer::BeginPlay()
{
	Super::BeginPlay();

	CYinAnim = Cast<UYinAnim>(GetMesh()->GetAnimInstance());

}

// Called every frame
void AYinPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AYinPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	PlayerInputComponent->BindAxis(TEXT("MoveSide"), this,
		&AYinPlayer::MoveSide);

	PlayerInputComponent->BindAxis(TEXT("MoveFront"), this,
		&AYinPlayer::MoveFront);

	PlayerInputComponent->BindAxis(TEXT("RotationZ"), this,
		&AYinPlayer::RotationZ);

	//Enu
	PlayerInputComponent->BindAction(TEXT("Jumping"), EInputEvent::IE_Pressed, this,
		&AYinPlayer::Jumping);

	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this,
		&AYinPlayer::NormalAttack);

}

void AYinPlayer::MoveFront(float fScale)
{

	AddMovementInput(GetActorForwardVector(), fScale);

	if (IsValid(CYinAnim))
	{
		if (fScale > 0.f)
		{
			CYinAnim->SetMoveDir(EDir::Front);
		}

		else if (fScale < 0.f)
		{
			CYinAnim->SetMoveDir(EDir::Back);
		}
	}

}

void AYinPlayer::MoveSide(float fScale)
{
	AddMovementInput(GetActorRightVector(), fScale);

	if (IsValid(CYinAnim))
	{
		if (fScale > 0.f)
		{
			CYinAnim->SetMoveDir(EDir::Right);
		}

		else if (fScale < 0.f)
		{
			CYinAnim->SetMoveDir(EDir::Left);
		}
	}
}

void AYinPlayer::RotationZ(float fScale)
{
	AddControllerYawInput(fScale);
}

void AYinPlayer::Jumping()
{
	Jump();

	if (IsValid(CYinAnim))
	{
		CYinAnim->NormalJumping();
	}
}

void AYinPlayer::NormalAttack()
{
	if (IsValid(CYinAnim))
	{
		CYinAnim->NormalAttack();
	}
}

