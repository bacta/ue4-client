// Copyright (c) 2015 OCDSoft, Inc. All rights reserved.

#pragma once

#include "GameFramework/GameMode.h"
#include "CharacterSelectGameMode.generated.h"

UCLASS(minimalapi)
class ACharacterSelectGameMode : public AGameMode
{
	GENERATED_BODY()
	
	
public:
	ACharacterSelectGameMode();

	virtual void BeginPlay() override;

protected:
	//The widget class to use for the HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GameMode", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	//The actual instance.
	UPROPERTY(BlueprintReadOnly)
	class UUserWidget* CurrentWidget;
};
