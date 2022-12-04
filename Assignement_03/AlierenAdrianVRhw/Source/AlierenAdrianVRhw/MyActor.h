#pragma once

#include "CoreMinimal.h"
#include "SceneManagement.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/GameViewportClient.h"
#include "SceneView.h"
#include "MyActor.generated.h"

UCLASS()
class ALIERENADRIANVRHW_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

	// static meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Static Meshes");
	UStaticMesh* high;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Static Meshes");
	UStaticMesh* mid;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Static Meshes");
	UStaticMesh* low;

	// thresholds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thresholds");
	float threshold_mid;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thresholds");
	float threshold2_low;

	static void GetComponentBounds
	(
		const USceneComponent* Component

	);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UStaticMeshComponent* staticMesh_;
	//UKismetSystemLibrary kismetSystemLibrary;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};