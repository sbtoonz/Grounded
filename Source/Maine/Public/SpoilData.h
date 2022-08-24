#pragma once
#include "CoreMinimal.h"
#include "ESpoilState.h"
#include "Engine/DataTable.h"
#include "SpoilData.generated.h"

USTRUCT(BlueprintType)
struct FSpoilData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpoilState SpoilState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SpoiledResultItem;
    
    MAINE_API FSpoilData();
};

