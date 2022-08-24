#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
#include "Engine/DataTable.h"
#include "BurgleQuestInstanceSingleRow.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestInstanceSingleRow : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RowHandle;
    
    UBurgleQuestInstanceSingleRow();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

