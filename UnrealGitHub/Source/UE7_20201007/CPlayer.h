// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
//#include "EngineMinimal.h"
//#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()	//모든 언리얼의 클래스는 UClass가 반드시 있어야된다 그래야 언리얼에서 사용할 클래스들을 인식한다 
			//언리얼 클래스는 내부적으로 가비지컬렉션이 잡혀있다(동적할당 해제안해줘도된다는거) 
			//단, 우리가 직접만든 new 동적할당은 반드시 해제해야된다
			//https://docs.unrealengine.com/ko/Programming/UnrealArchitecture/Reference/Classes/Specifiers/index.html

			//UProPerty :https://docs.unrealengine.com/ko/Programming/UnrealArchitecture/Reference/Properties/index.html 
			//변수 속성같은 느낌
class UE7_20201007_API ACPlayer : public ACharacter
{
	GENERATED_BODY()	//언리얼에서 기본적으로 갖추고 있어야될 내용들을 매크로 로 만들어 놓았다

public:
	// Sets default values for this character's properties
	ACPlayer();

protected:						 //EditAnywhere 편집가능해짐			
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
	void Jumping();		//액션매핑은 scale이 없기때문에 인자가 없이만든다

};
