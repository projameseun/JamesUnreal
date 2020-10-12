// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShinbi.h"
#include "ShinbiAnim.h"

// Sets default values
APlayerShinbi::APlayerShinbi()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	Arm->SetupAttachment(GetMesh());
	Camera->SetupAttachment(Arm);

	//애니메이션 클래스지정
	//AnimAsset(TEXT("AnimBlueprint'/Game/Player/BPWukongAnim.BPWukongAnim_C'"));
	static ConstructorHelpers::FClassFinder<UShinbiAnim>	AnimAsset(TEXT("AnimBlueprint'/Game/Player/Bp_ShinbiAnim.Bp_ShinbiAnim_C'"));

	if (AnimAsset.Succeeded())
	{
		
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);
	}

}

// Called when the game starts or when spawned
void APlayerShinbi::BeginPlay()
{
	Super::BeginPlay();

	CShinbiAnim = Cast<UShinbiAnim>(GetMesh()->GetAnimInstance());

}

// Called every frame
void APlayerShinbi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerShinbi::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	PlayerInputComponent->BindAxis(TEXT("MoveSide"), this,
		&APlayerShinbi::MoveSide);

	PlayerInputComponent->BindAxis(TEXT("MoveFront"), this,
		&APlayerShinbi::MoveFront);

	PlayerInputComponent->BindAxis(TEXT("RotationZ"), this,
		&APlayerShinbi::RotationZ);

	//Enu
	PlayerInputComponent->BindAction(TEXT("Jumping"), EInputEvent::IE_Pressed, this,
		&APlayerShinbi::Jumping);

	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this,
		&APlayerShinbi::NormalAttack);

}

void APlayerShinbi::MoveFront(float fScale)
{
	
	AddMovementInput(GetActorForwardVector(), fScale);

	if (IsValid(CShinbiAnim))
	{
		if (fScale > 0.f)
		{
			CShinbiAnim->SetMoveDir(EDir::Front);
		}

		else if (fScale < 0.f)
		{
			CShinbiAnim->SetMoveDir(EDir::Back);
		}
	}

}

void APlayerShinbi::MoveSide(float fScale)
{
	AddMovementInput(GetActorRightVector(), fScale);

	if (IsValid(CShinbiAnim))
	{
		if (fScale > 0.f)
		{
			CShinbiAnim->SetMoveDir(EDir::Right);
		}

		else if (fScale < 0.f)
		{
			CShinbiAnim->SetMoveDir(EDir::Left);
		}
	}
}

void APlayerShinbi::RotationZ(float fScale)
{
	AddControllerYawInput(fScale);
}

void APlayerShinbi::Jumping()
{
	Jump();

	if (IsValid(CShinbiAnim))
	{
		CShinbiAnim->NormalJumping();
	}
}

void APlayerShinbi::NormalAttack()
{
	if (IsValid(CShinbiAnim))
	{
		CShinbiAnim->NormalAttack();
	}
}