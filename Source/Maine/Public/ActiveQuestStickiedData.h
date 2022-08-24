#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActiveQuestStickiedData.generated.h"

USTRUCT(BlueprintType)
struct FActiveQuestStickiedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle QuestRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStickiedState;
    
    MAINE_API FActiveQuestStickiedData();
};

