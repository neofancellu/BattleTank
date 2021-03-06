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
		bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
		bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation)const;

		
		UPROPERTY(EditAnywhere)
		float CrosshairXLocation = 0.5f;

		UPROPERTY(EditAnywhere)
		float CrosshairYLocation = 0.3333f;

		UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000.0f;
};
