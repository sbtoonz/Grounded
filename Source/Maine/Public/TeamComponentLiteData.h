#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "TeamComponentLiteData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UTeamComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle DefaultTeamRowHandle;
    
    UTeamComponentLiteData();
};

