#pragma once
#include "CoreMinimal.h"
#include "BaseLODActor.h"
#include "StatusEffectOrigin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "GoapActionInstance.h"
#include "CharacterLODActor.generated.h"

class UInterestCore;
class AActor;

UCLASS()
class MAINE_API UCharacterLODActor : public UBaseLODActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGoapActionInstance StartedAction;
    
public:
    UCharacterLODActor();
protected:
    UFUNCTION()
    void OnTimelapseChange(bool TimelapseActive);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsResting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintPure)
    UInterestCore* GetInterestCore() const;
    
    UFUNCTION(BlueprintPure)
    FLocString GetCharacterTypeName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCharacterInstanceName() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBlackboardTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetBlackboardTargetActor() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

