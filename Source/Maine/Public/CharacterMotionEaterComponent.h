#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MotionEaterMovedDelegate.h"
#include "MotionEaterCharacterEventDelegate.h"
#include "CharacterMotionEaterComponent.generated.h"

class ASurvivalCharacter;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCharacterMotionEaterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 BlockX: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 BlockY: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FMotionEaterMoved OnEaterMoved;
    
    UPROPERTY(BlueprintAssignable)
    FMotionEaterCharacterEvent OnCharacterAttached;
    
    UPROPERTY(BlueprintAssignable)
    FMotionEaterCharacterEvent OnCharacterDetached;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AttachedCharacters)
    TArray<ASurvivalCharacter*> AttachedCharacters;
    
public:
    UCharacterMotionEaterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AttachedCharacters(const TArray<ASurvivalCharacter*>& PreviousCharacters);
    
    UFUNCTION()
    void HandleAttachedCharacterDestroyed(AActor* Sender);
    
};

