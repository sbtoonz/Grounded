#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "FaucetBuilding.generated.h"

class UFaucetSpawnerComponent;

UCLASS(Abstract)
class MAINE_API AFaucetBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFaucetSpawnerComponent* FaucetSpawnerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAllowTakeAll: 1;
    
public:
    AFaucetBuilding();
};

