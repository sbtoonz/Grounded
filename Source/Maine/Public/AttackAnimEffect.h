#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimEffect.h"
#include "EHitMotionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AttackAnimEffect.generated.h"

class AActor;

UCLASS()
class MAINE_API UAttackAnimEffect : public UAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EHitMotionType AttackMotionType;
    
    UPROPERTY(EditAnywhere)
    bool bHasHitStops;
    
    UPROPERTY(EditAnywhere)
    bool bHasReload;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag AttackSpeedTag;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> AnimPropClass;
    
    UPROPERTY(EditAnywhere)
    FName PropAttachSocket;
    
public:
    UAttackAnimEffect();
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAttackSpeedTag() const;
    
};

