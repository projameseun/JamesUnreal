// Fill out your copyright notice in the Description page of Project Settings.

//언리얼에서 A가앞에 있으면 Actor // U가 붙어있으면 Component , 일반기능 클래스이다 // 구조체는 F를붙인다


#include "MainGameModeBase.h"
#include "CPlayer.h" //Bp클래스는 CPlayer를 상속받고 있다 헤더를 그래서 가져온다 

AMainGameModeBase::AMainGameModeBase()
{
	//플레이어로 사용할 블루프린트 클래스의 UCLASS 정보를 얻어온다
	//이기능은 생성자에서만 사용이 가능하다.
	//FObjectFinder  =>실제 객체를 생성해주는 기능
	//FClassFinder  =>이놈이 어떤 클래스 타입인지에 대한 정보를 만들어준다
	//위에 이두개가 ConstructorHelpers에 존재한다
	static ConstructorHelpers::FClassFinder<ACPlayer>	PlayerClass(TEXT("Blueprint'/Game/Player/Bp_CPlayer.Bp_CPlayer_C'"));	//경로는 위에사진처럼가져오면됨
		//_C 클래스정보만들때 꼭붙여야된다 중요

	if (PlayerClass.Succeeded())	//성공했는지 
		DefaultPawnClass = PlayerClass.Class;	//이렇게 지정하면 이게임모드를 사용하는 애는 기본플레이어 폰클래스를 애를 사용하게된다
}