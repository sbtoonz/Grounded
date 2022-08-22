#pragma once
#include "CoreMinimal.h"
#include "AnyControlMappingKey.h"
#include "ControlConflictContextMetadata.h"
#include "AxisDirectionKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ControlMetadata.h"
#include "EControlConflictContext.h"
#include "GlobalControlsData.generated.h"

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalControlsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FControlMetadata> ActionData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FAxisDirectionKey, FControlMetadata> AxisData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EControlConflictContext, FControlConflictContextMetadata> ConflictContextData;
    
    UGlobalControlsData();
    UFUNCTION(BlueprintPure)
    int32 GetConflictsWithMask(EControlConflictContext Context) const;
    
    UFUNCTION(BlueprintPure)
    bool FindMetadata(const FAnyControlMappingKey& Key, FControlMetadata& OutData) const;
    
};

