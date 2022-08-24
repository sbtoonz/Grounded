#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MetaBuildingVariantData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FMetaBuildingVariantData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDummy: 1;
    
    FMetaBuildingVariantData();
};

