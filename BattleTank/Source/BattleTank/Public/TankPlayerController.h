// Copyright Neo Fancellu 2018

#pragma once

#include "Tank.h"
#include "Engine.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	private:
		ATank* GetControlledTank() const;
	
		virtual void BeginPlay() override;
		virtual void Tick( float DeltaTime ) override;

	    void AimTowardsCrosshair();

		bool GetSightRayHitLocation(FVector& HitLocation) const;
};
