#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "ZiplineAnchorBuilding.generated.h"

class UZiplineAnchor;

UCLASS(Abstract)
class MAINE_API AZiplineAnchorBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UZiplineAnchor* ZiplineAnchor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPlayerCanInteract: 1;
    
public:
    AZiplineAnchorBuilding();
};

