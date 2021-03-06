// Copyright Neo Fancellu 2018

#pragma once

#include "Engine.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);

protected:
	// Called when the game starts
	

public:	
	// Called every frame
	

	void AimAt(FVector HitLocation, float LaunchSpeed);
	
private:
	UStaticMeshComponent* Barrel = nullptr;
	void MoveBarrelTowards(FVector AimDirection);
};
