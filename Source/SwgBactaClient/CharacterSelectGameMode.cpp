// Copyright (c) 2015 OCDSoft, Inc. All rights reserved.

#include "SwgBactaClient.h"
#include "CharacterSelectGameMode.h"
#include "Blueprint/UserWidget.h"


ACharacterSelectGameMode::ACharacterSelectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void ACharacterSelectGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (HUDWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		//Here we are setting an instance of the widget to the viewport.
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();
		}
	}
}