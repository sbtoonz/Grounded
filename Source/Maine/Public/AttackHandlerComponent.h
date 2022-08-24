#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HandleAttackEffectsDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttackHandlerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAttackHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandleAttackEffectsDelegate OnHandleAttackEffects;
    
    UAttackHandlerComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleEnvironmentHit(FDataTableRowHandle AttackDataRowHandle, FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleAttackStartEffects(FDataTableRowHandle AttackDataRowHandle, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleAttackLaunchEffects(FDataTableRowHandle AttackDataRowHandle, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleAttackEffects(FDataTableRowHandle AttackDataRowHandle, FVector Location);
    
};

