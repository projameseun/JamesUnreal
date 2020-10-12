// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerCharacter.h"
#include "PlayerShinbi.generated.h"

/**
 * 
 */
UCLASS()
class TEST20201011_API APlayerShinbi : public APlayerCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerShinbi();

protected:
	UPROPERTY(Category = Arm, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	USpringArmComponent* Arm;

	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	UCameraComponent* Camera;

	class UShinbiAnim* CShinbiAnim;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	void MoveFront(float fScale);
	void MoveSide(float fScale);
	void RotationZ(float fScale);
	void Jumping();
	void NormalAttack();
	
};
