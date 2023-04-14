// Fill out your copyright notice in the Description page of Project Settings.


#include "SuckerGun.h"

// Sets default values
ASuckerGun::ASuckerGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

