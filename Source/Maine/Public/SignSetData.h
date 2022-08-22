#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ESignUnlockType.h"
#include "SignSetData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct MAINE_API FSignSetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* Table;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ESignUnlockType UnlockType;
    
    FSignSetData();
};

