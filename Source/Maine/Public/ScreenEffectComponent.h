#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ScreenEffectComponent.generated.h"

class UStatusEffect;
class UScreenEffectData;
class UCameraComponent;
class ASurvivalCharacter;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UScreenEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASurvivalCharacter* OwnerCharacter;
    
    UPROPERTY(Export, Transient)
    TArray<UCameraComponent*> CameraComponents;
    
public:
    UScreenEffectComponent();
protected:
    UFUNCTION()
    void OnStatusEffectRemoved(AActor* Owner, UStatusEffect* StatusEffect);
    
    UFUNCTION()
    void OnStatusEffectAdded(AActor* Owner, UStatusEffect* StatusEffect);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndScreenEffect(UScreenEffectData* ScreenEffectData);
    
    UFUNCTION(BlueprintCallable)
    void BeginScreenEffectWithDirection(UScreenEffectData* ScreenEffectData, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void BeginScreenEffect(UScreenEffectData* ScreenEffectData);
    
};

