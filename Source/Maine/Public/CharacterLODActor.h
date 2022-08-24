#pragma once
#include "CoreMinimal.h"
#include "BaseLODActor.h"
#include "LocString.h"
#include "GoapActionInstance.h"
#include "StatusEffectOrigin.h"
#include "UObject/NoExportTypes.h"
#include "CharacterLODActor.generated.h"

class UInterestCore;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UCharacterLODActor : public UBaseLODActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoapActionInstance StartedAction;
    
public:
    UCharacterLODActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimelapseChange(bool TimelapseActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterestCore* GetInterestCore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLocString GetCharacterTypeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharacterInstanceName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBlackboardTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBlackboardTargetActor() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

