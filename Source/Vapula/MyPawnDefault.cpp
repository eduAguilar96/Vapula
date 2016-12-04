// Fill out your copyright notice in the Description page of Project Settings.

#include "Vapula.h"
#include "MyPawnDefault.h"


// Sets default values
AMyPawnDefault::AMyPawnDefault()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawnDefault::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawnDefault::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPawnDefault::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

