#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ActiveQuestStickiedData.generated.h"

USTRUCT(BlueprintType)
struct FActiveQuestStickiedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FDataTableRowHandle QuestRowHandle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStickiedState;
    
    MAINE_API FActiveQuestStickiedData();
};

