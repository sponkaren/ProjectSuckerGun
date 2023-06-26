// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "AimWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSUCKERGUN_API UAimWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* CrossHairsImage;

public:
	void SetCrosshairsVisibility(bool _isVisible);
	
};
