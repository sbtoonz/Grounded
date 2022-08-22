#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "MetaBuildingVariantData.generated.h"

USTRUCT()
struct MAINE_API FMetaBuildingVariantData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bDummy: 1;
    
    FMetaBuildingVariantData();
};

