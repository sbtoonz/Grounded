#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProxyActor.h"
#include "AI/Navigation/NavigationTypes.h"
#include "ClimbableSplineKey.h"
#include "GoapActionInstance.h"
#include "ProxyCharacterActor.generated.h"

class UNavigationPath;
class UInterestCore;

UCLASS(Blueprintable)
class MAINE_API UProxyCharacterActor : public UProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavigationPath* CurrentNavigationPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterestCore* InterestCore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoapActionInstance TargetAction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbableSplineKey AttachedSpline;
    
    UProxyCharacterActor();
    UFUNCTION(BlueprintCallable)
    void UpdateHomeLocation();
    
protected:
    UFUNCTION()
    void OnNavigationPathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent);
    
    UFUNCTION(BlueprintCallable)
    void MarkDesiredActionUnreachable(bool bObstructed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaveDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSearchOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomeLocation() const;
    
};

