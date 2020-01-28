// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyboardController.h"

void AKeyboardController::KeyPressed( float Value )
{
	APawn* pPawn = this->GetPawn();
	FRotator Rotation = GetControlRotation();

	const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
	pPawn->AddMovementInput( Direction, Value );
}