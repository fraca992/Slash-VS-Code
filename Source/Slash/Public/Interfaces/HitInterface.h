// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HitInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHitInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SLASH_API IHitInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent) // instead of virtual function, we use BlueprintNativeEvent so we can implement both c++ and blueprint. This will create a virtual function called GetHit_Implementation. To then call this function in c++ we use Execute_GetHit()
	void GetHit(const FVector& ImpactPoint); //avoid making a copy with a reference, more efficient
};
