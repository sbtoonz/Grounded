#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "ZiplineAnchorBuilding.generated.h"

class UZiplineAnchor;

UCLASS(Abstract, Blueprintable)
class MAINE_API AZiplineAnchorBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UZiplineAnchor* ZiplineAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayerCanInteract: 1;
    
public:
    AZiplineAnchorBuilding();
};

