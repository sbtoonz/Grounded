#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimEffect.h"
#include "EHitMotionType.h"
#include "GameplayTagContainer.h"
#include "AttackAnimEffect.generated.h"

class AActor;

UCLASS(Blueprintable)
class MAINE_API UAttackAnimEffect : public UAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitMotionType AttackMotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasHitStops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackSpeedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AnimPropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropAttachSocket;
    
public:
    UAttackAnimEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAttackSpeedTag() const;
    
};

