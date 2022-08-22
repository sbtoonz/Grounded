#pragma once
#include "CoreMinimal.h"
#include "ProxyActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavPathEvent -FallbackName=ENavPathEvent
#include "ClimbableSplineKey.h"
#include "GoapActionInstance.h"
#include "ProxyCharacterActor.generated.h"

class UNavigationPath;
class UInterestCore;

UCLASS(BlueprintType)
class MAINE_API UProxyCharacterActor : public UProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNavigationPath* CurrentNavigationPath;
    
    UPROPERTY()
    UInterestCore* InterestCore;
    
protected:
    UPROPERTY()
    FGoapActionInstance TargetAction;
    
public:
    UPROPERTY()
    FClimbableSplineKey AttachedSpline;
    
    UProxyCharacterActor();
    UFUNCTION(BlueprintCallable)
    void UpdateHomeLocation();
    
protected:
    UFUNCTION()
    void OnNavigationPathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent);
    
    UFUNCTION()
    void MarkDesiredActionUnreachable(bool bObstructed);
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetWaveDestination() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSearchOrigin() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHomeLocation() const;
    
};

