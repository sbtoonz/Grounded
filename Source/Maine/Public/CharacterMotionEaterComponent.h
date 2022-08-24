#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MotionEaterMovedDelegate.h"
#include "MotionEaterCharacterEventDelegate.h"
#include "CharacterMotionEaterComponent.generated.h"

class ASurvivalCharacter;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCharacterMotionEaterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BlockX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BlockY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMotionEaterMoved OnEaterMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionEaterCharacterEvent OnCharacterAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionEaterCharacterEvent OnCharacterDetached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachedCharacters, meta=(AllowPrivateAccess=true))
    TArray<ASurvivalCharacter*> AttachedCharacters;
    
public:
    UCharacterMotionEaterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedCharacters(const TArray<ASurvivalCharacter*>& PreviousCharacters);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttachedCharacterDestroyed(AActor* Sender);
    
};

