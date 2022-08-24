#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseAppearanceData.generated.h"

class USkeletalMesh;

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseAppearanceData : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseAppearanceData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USkeletalMesh> GetDefaultMesh() const;
    
};

