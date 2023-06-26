// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectSuckerGunGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectSuckerGunCharacter.h"

void UProjectSuckerGunGameInstance::Setup()
{
	SpawnAimWidget();

	TArray<AActor*> FoundActors;
	AProjectSuckerGunCharacter* character;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AProjectSuckerGunCharacter::StaticClass(), FoundActors);

	for (AActor* actor : FoundActors)
	{
		character = Cast<AProjectSuckerGunCharacter>(actor);
		character->AimChange.AddDynamic(this, &UProjectSuckerGunGameInstance::SetCrosshairsVisibility);
	}	
}

void UProjectSuckerGunGameInstance::SpawnAimWidget()
{
	if (AimWidgetClass)
	{
		if(!AimWidget)
		{
			AimWidget = CreateWidget<UAimWidget>(this, AimWidgetClass);
			AimWidget->AddToViewport();			
		}
	}	
}

void UProjectSuckerGunGameInstance::SetCrosshairsVisibility(bool _isVisible)
{
	if (AimWidget)
	{
		AimWidget->SetCrosshairsVisibility(_isVisible);
	}
}