#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ReputationData.h"
#include "ZoneData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FZoneData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bUseInteriorTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ZoneAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FReputationData> HourlyReputationAccruals;
    
    FZoneData();
};

