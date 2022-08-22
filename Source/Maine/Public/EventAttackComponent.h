#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "DamageInfo.h"
#include "EDamageEventComponentType.h"
#include "EventAttackComponent.generated.h"

class UAttack;
class AController;
class UBaseLODActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEventAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> AttacksToCheck;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EDamageEventComponentType DamageEventType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HealthToLoseForApplyingEffect;
    
public:
    UEventAttackComponent();
protected:
    UFUNCTION()
    void ResetValues();
    
    UFUNCTION()
    void OnDamagedCharacter(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnAttack(UAttack* Attack);
    
    UFUNCTION()
    void EndAttack(UAttack* Attack);
    
    UFUNCTION()
    void ApplyEffects();
    
};

