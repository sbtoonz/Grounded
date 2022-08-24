#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MetaBuildingIdentifier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FMetaBuildingIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Variant;
    
    FMetaBuildingIdentifier();
};

