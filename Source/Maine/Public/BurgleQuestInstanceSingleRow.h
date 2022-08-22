#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BurgleQuestInstanceSingleRow.generated.h"

UCLASS()
class MAINE_API UBurgleQuestInstanceSingleRow : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FDataTableRowHandle RowHandle;
    
    UBurgleQuestInstanceSingleRow();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

