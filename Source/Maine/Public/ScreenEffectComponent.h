#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ScreenEffectComponent.generated.h"

class UStatusEffect;
class ASurvivalCharacter;
class UScreenEffectData;
class UCameraComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UScreenEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASurvivalCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCameraComponent*> CameraComponents;
    
public:
    UScreenEffectComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectRemoved(AActor* Owner, UStatusEffect* StatusEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectAdded(AActor* Owner, UStatusEffect* StatusEffect);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndScreenEffect(UScreenEffectData* ScreenEffectData);
    
    UFUNCTION(BlueprintCallable)
    void BeginScreenEffectWithDirection(UScreenEffectData* ScreenEffectData, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void BeginScreenEffect(UScreenEffectData* ScreenEffectData);
    
};

