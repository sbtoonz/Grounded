#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestParameterValue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BurgleQuestTableRowParameterValue.generated.h"

USTRUCT()
struct MAINE_API FBurgleQuestTableRowParameterValue : public FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle Value;
    
    FBurgleQuestTableRowParameterValue();
};

