#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "FaucetBuilding.generated.h"

class UFaucetSpawnerComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AFaucetBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFaucetSpawnerComponent* FaucetSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTakeAll: 1;
    
public:
    AFaucetBuilding();
};

