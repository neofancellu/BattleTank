// Copyright Neo Fancellu 2018


#include "TankPlayerController.h"



void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	}else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing %s"), *(ControlledTank->GetName()));
	}
}

ATank* ATankPlayerController::GetControlledTank() const { return Cast<ATank>(GetPawn()); }

bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const {
	HitLocation = FVector(1.0);
	return true;
}

void ATankPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}

void ATankPlayerController::AimTowardsCrosshair() {
	if (!GetControlledTank()) {return;}
	FVector HitLocation;// out parameter

	if (GetSightRayHitLocation(HitLocation)) {
		UE_LOG(LogTemp, Warning, TEXT("Hit location : %s"), *HitLocation.ToString());
	}
	
}
	








