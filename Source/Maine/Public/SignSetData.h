#pragma once
#include "CoreMinimal.h"
#include "ESignUnlockType.h"
#include "Engine/DataTable.h"
#include "SignSetData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct MAINE_API FSignSetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESignUnlockType UnlockType;
    
    FSignSetData();
};

