#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EDamageEventComponentType.h"
#include "DamageInfo.h"
#include "EventAttackComponent.generated.h"

class UBaseLODActor;
class AController;
class UAttack;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEventAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AttacksToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageEventComponentType DamageEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthToLoseForApplyingEffect;
    
public:
    UEventAttackComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetValues();
    
    UFUNCTION(BlueprintCallable)
    void OnDamagedCharacter(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION(BlueprintCallable)
    void OnAttack(UAttack* Attack);
    
    UFUNCTION(BlueprintCallable)
    void EndAttack(UAttack* Attack);
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffects();
    
};

