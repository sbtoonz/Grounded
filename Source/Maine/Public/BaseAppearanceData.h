#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BaseAppearanceData.generated.h"

class USkeletalMesh;

UCLASS(Abstract, BlueprintType)
class MAINE_API UBaseAppearanceData : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseAppearanceData();
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<USkeletalMesh> GetDefaultMesh() const;
    
};

