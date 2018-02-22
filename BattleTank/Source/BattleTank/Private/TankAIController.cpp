// Copyright Neo Fancellu 2018

#include "TankAIController.h"

void ATankAIController::BeginPlay() {
	Super::BeginPlay();

	auto PlayerTank = GetControlledTank();
	if (!PlayerTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI can't find Player"));
	}else {
		UE_LOG(LogTemp, Warning, TEXT("AIController found %s"), *(PlayerTank->GetName()));
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (!PlayerPawn) { return nullptr; }
	return Cast<ATank>(PlayerPawn);

}





