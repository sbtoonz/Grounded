#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BaseAppearanceData.h"
#include "SkeletalMeshAttachment.h"
#include "HairAppearanceData.generated.h"

UCLASS()
class MAINE_API UHairAppearanceData : public UBaseAppearanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSkeletalMeshAttachment DefaultMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FSkeletalMeshAttachment> HairMeshes;
    
public:
    UHairAppearanceData();
};

