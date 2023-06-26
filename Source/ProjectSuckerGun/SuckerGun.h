// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SuckerGun.generated.h"

enum class eSuckerState
{
	loaded,
	fired,
	latching,
	latched,
	retracting,
	max_states
};

UCLASS()
class PROJECTSUCKERGUN_API ASuckerGun : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SuckerGun, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* GunMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SuckerGun, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* SuckerMesh;		


public:		

	ASuckerGun();

protected:
	
	FVector suckerPos;
	FVector gunPos;
	float fireSpeed;
	float retractSpeed;
	float range;
	eSuckerState suckerState;

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UStaticMeshComponent* GetGunMesh() const { return GunMesh; }

	bool FireTrigger();

	eSuckerState GetState();
};
