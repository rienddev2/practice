// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "KeyboardController.generated.h"

/**
 * 
 */
UCLASS()
class ARCHERO_API AKeyboardController : public APlayerController
{
	GENERATED_BODY()

	UFUNCTION()
	void KeyPressed( float Value );

};
