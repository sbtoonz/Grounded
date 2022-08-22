#pragma once
#include "CoreMinimal.h"
#include "BaseAppearanceData.h"
#include "AppearanceData.generated.h"

class USkeletalMesh;

UCLASS()
class MAINE_API UAppearanceData : public UBaseAppearanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USkeletalMesh> DefaultMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USkeletalMesh> FemaleMesh;
    
public:
    UAppearanceData();
};

