#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshAttachment.h"
#include "BaseAppearanceData.h"
#include "GameplayTagContainer.h"
#include "HairAppearanceData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UHairAppearanceData : public UBaseAppearanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalMeshAttachment DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSkeletalMeshAttachment> HairMeshes;
    
public:
    UHairAppearanceData();
};

