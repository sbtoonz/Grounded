#pragma once
#include "CoreMinimal.h"
#include "BaseAppearanceData.h"
#include "AppearanceData.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class MAINE_API UAppearanceData : public UBaseAppearanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> FemaleMesh;
    
public:
    UAppearanceData();
};

