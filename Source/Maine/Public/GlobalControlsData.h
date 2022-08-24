#pragma once
#include "CoreMinimal.h"
#include "AnyControlMappingKey.h"
#include "Engine/DataAsset.h"
#include "EControlConflictContext.h"
#include "ControlMetadata.h"
#include "ControlConflictContextMetadata.h"
#include "AxisDirectionKey.h"
#include "GlobalControlsData.generated.h"

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalControlsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FControlMetadata> ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FAxisDirectionKey, FControlMetadata> AxisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EControlConflictContext, FControlConflictContextMetadata> ConflictContextData;
    
    UGlobalControlsData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConflictsWithMask(EControlConflictContext Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindMetadata(const FAnyControlMappingKey& Key, FControlMetadata& OutData) const;
    
};

