#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ZiplineAttachedDelegateDelegate.h"
#include "ZiplineAnchor.generated.h"

class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UZiplineAnchor : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FZiplineAttachedDelegate OnZiplineAttached;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APawn> SelectModePawn;
    
    UPROPERTY(EditDefaultsOnly)
    float AbsMinAllowedAngleDot;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
public:
    UZiplineAnchor();
    UFUNCTION(BlueprintPure)
    float GetMaxRange() const;
    
    UFUNCTION(BlueprintPure)
    bool AnyZiplineAttached() const;
    
};

