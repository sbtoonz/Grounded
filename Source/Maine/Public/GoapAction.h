#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GoapActionOwner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EFaceTargetType.h"
#include "EGoapActionResult.h"
#include "EInteractAnimType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GoapAction.generated.h"

class UCharacterLODActor;

UCLASS(Abstract, BlueprintType)
class MAINE_API UGoapAction : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float InherentCost;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractionRange;
    
    UPROPERTY(EditDefaultsOnly)
    float InteractDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag InteractSoundTag;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bIsEnabled: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bMustLand: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 IndefiniteDuration: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOwnerOnly: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bObstructionTrace: 1;
    
    UPROPERTY(EditDefaultsOnly)
    EFaceTargetType Facing;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractAnimType InteractAnimType;
    
    UPROPERTY(EditDefaultsOnly)
    float Cooldown;
    
    UGoapAction();
    UFUNCTION(BlueprintCallable)
    EGoapActionResult ExecuteReal(UCharacterLODActor* Actor, FGoapActionOwner& Owner, FVector TargetLocation);
    
    UFUNCTION(BlueprintPure)
    bool CanExecuteReal(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner);
    
    UFUNCTION(BlueprintPure)
    bool CanActorExecuteEver(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner) const;
    
};

