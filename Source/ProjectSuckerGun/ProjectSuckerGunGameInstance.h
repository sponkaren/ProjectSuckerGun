// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AimWidget.h"
#include "ProjectSuckerGunGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSUCKERGUN_API UProjectSuckerGunGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player, HUD and UI")
	TSubclassOf<class UAimWidget> AimWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player, HUD and UI")
	class UAimWidget* AimWidget;
	
};
