// Fill out your copyright notice in the Description page of Project Settings.


#include "SuckerGun.h"

// Sets default values
ASuckerGun::ASuckerGun()
{
	PrimaryActorTick.bCanEverTick = true;

	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun Mesh"));
	SetRootComponent(GunMesh);
	SuckerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sucker Mesh"));
	SuckerMesh->SetupAttachment(GunMesh);

}

// Called when the game starts or when spawned
void ASuckerGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuckerGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

