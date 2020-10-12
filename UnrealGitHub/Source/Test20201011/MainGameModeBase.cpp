// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameModeBase.h"
#include "YinPlayer.h"
#include "PlayerShinbi.h"

AMainGameModeBase::AMainGameModeBase()
{
	//static ConstructorHelpers::FClassFinder<APlayerShinbi> PlayerShinbiClass(TEXT("Blueprint'/Game/Player/Bp_PlayerShinbi.Bp_PlayerShinbi_C'"));
	static ConstructorHelpers::FClassFinder<AYinPlayer> PlayerShinbiClass(TEXT("BlueprintBlueprint'/Game/Player/Bp_YinPlayer.Bp_YinPlayer_C'"));

	if (PlayerShinbiClass.Succeeded())
	{
		DefaultPawnClass = PlayerShinbiClass.Class;
	}

}