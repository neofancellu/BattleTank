// Copyright Neo Fancellu 2018

#pragma once

#include "Tank.h"
#include "Engine.h"
#include "AIController.h"
#include "TankAIController.generated.h"



UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
	private:

		ATank* GetControlledTank() const;

		ATank* GetPlayerTank() const;

		virtual void BeginPlay() override;
};
