#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "StatusEffectUIData.h"
#include "EStatusEffectType.h"
#include "EStatusEffectApplyType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EStatusEffectDurationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EStatusEffectAttackChargeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "StatusEffectData.generated.h"

class UScreenEffectData;
class USurvivalDamageType;
class ASpawnedEffectActor;
class UVisualEffect;

USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FStatusEffectUIData DisplayData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStatusEffectType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStatusEffectDurationType DurationType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Interval;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 DamageTypeFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer ApplicationTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer EffectTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer DamageSourceTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer DamageTargetTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag UniqueTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStatusEffectApplyType ApplyType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStatusEffectAttackChargeType AttackChargeType;
    
    UPROPERTY(EditAnywhere)
    uint32 ClearFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ExtraData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASpawnedEffectActor> SpawnedActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UScreenEffectData* ScreenEffectData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVisualEffect* VisualEffectData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowInUI;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsNegativeEffectInUI;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStackInUI;
    
    FStatusEffectData();
};

