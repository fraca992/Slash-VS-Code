// Fill out your copyright notice in the Description page of Project Settings.

#include "Items/Item.h"
#include "Slash/DebugMacros.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(FVector(0.f, 0.f, 50.f));
	SetActorRotation(FRotator(0.f, 34.f, 0.f));

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	DRAW_SPHERE(Location)
	DRAW_VECTOR(Location, Location + Forward * 100.f)
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

