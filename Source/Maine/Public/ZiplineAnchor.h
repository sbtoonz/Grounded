#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "ZiplineAttachedDelegateDelegate.h"
#include "ZiplineAnchor.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UZiplineAnchor : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZiplineAttachedDelegate OnZiplineAttached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> SelectModePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsMinAllowedAngleDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
public:
    UZiplineAnchor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyZiplineAttached() const;
    
};

