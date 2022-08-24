#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestParameterValue.h"
#include "Engine/DataTable.h"
#include "BurgleQuestTableRowParameterValue.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestTableRowParameterValue : public FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Value;
    
    FBurgleQuestTableRowParameterValue();
};

