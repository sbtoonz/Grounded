#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "HandleAttackEffectsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AttackHandlerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAttackHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHandleAttackEffectsDelegate OnHandleAttackEffects;
    
    UAttackHandlerComponent();
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleEnvironmentHit(FDataTableRowHandle AttackDataRowHandle, FHitResult HitResult);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleAttackStartEffects(FDataTableRowHandle AttackDataRowHandle, FVector Location);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleAttackLaunchEffects(FDataTableRowHandle AttackDataRowHandle, FVector Location);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleAttackEffects(FDataTableRowHandle AttackDataRowHandle, FVector Location);
    
};

