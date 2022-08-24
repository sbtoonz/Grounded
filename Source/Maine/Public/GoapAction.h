#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GoapActionOwner.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "EFaceTargetType.h"
#include "EGoapActionResult.h"
#include "EInteractAnimType.h"
#include "GoapAction.generated.h"

class UCharacterLODActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API UGoapAction : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InherentCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMustLand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IndefiniteDuration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOwnerOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bObstructionTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaceTargetType Facing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAnimType InteractAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UGoapAction();
    UFUNCTION(BlueprintCallable)
    EGoapActionResult ExecuteReal(UCharacterLODActor* Actor, FGoapActionOwner& Owner, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExecuteReal(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActorExecuteEver(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner) const;
    
};

