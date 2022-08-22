#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ECooldownBeginConfig.h"
#include "EAbilityCondition.h"
#include "EAbiltyTargetType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AbilityData.generated.h"

class UAnimMontage;

USTRUCT()
struct MAINE_API FAbilityData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle AttackData;
    
    UPROPERTY(EditDefaultsOnly)
    float Cooldown;
    
    UPROPERTY(EditDefaultsOnly)
    ECooldownBeginConfig BeginCooldownConfig;
    
    UPROPERTY(EditDefaultsOnly)
    float SetBeginCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Priority;
    
    UPROPERTY(EditDefaultsOnly)
    EAbiltyTargetType AbilityTargetType;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ScriptedTargetTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseNearestScriptedTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EAbilityCondition> AbilityConditions;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle PreferredNextAbility;
    
    UPROPERTY(EditDefaultsOnly)
    bool IgnoreCooldownInPreferedAbility;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* AnimPreAttack;
    
    FAbilityData();
};

