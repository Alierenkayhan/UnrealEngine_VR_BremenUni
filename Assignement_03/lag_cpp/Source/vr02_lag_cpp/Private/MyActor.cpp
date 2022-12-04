// Fill out your copyright notice in the Description page of Project Settings.

#include "vr02_lag_cpp.h"
#include "MyActor.h"

// Sets default values
AMyActor::AMyActor() : speed(70.0), up(true), maxHeight(760), minHeight(200.0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Actor from static mesh Object
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		mesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube_Chamfer.1M_Cube_Chamfer'"));
	staticMesh_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
	staticMesh_->SetStaticMesh(mesh.Object);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	currentLocation_ = this->GetActorLocation();
	if (up) {
		currentLocation_.Z += speed * DeltaTime;
		if (currentLocation_.Z >= maxHeight) {
			up = false;
			currentLocation_.Z = maxHeight;
		}
	}
	else {
		currentLocation_.Z -= speed * DeltaTime;
		if (currentLocation_.Z <= minHeight) {
			up = true;
			currentLocation_.Z = minHeight;
		}
	}
	SetActorLocation(currentLocation_);

}

