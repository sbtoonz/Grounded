#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "ChatterEventReference.h"
#include "EChatterConsumableType.h"
#include "ConsumableDataSet.generated.h"

USTRUCT(BlueprintType)
struct FConsumableDataSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ConsumableEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatterEventReference ConsumeChatterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatterConsumableType ConsumeChatterType;
    
    MAINE_API FConsumableDataSet();
};

