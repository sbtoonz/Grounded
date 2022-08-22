#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "ZiplineAttachedToOriginDelegateDelegate.h"
#include "TargetZiplineAnchorChangedDelegateDelegate.h"
#include "RecipeRequirements.h"
#include "ZiplineSelectorPawn.generated.h"

class UZiplineAnchor;
class UCameraComponent;
class AZiplineLine;

UCLASS()
class MAINE_API AZiplineSelectorPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTargetZiplineAnchorChangedDelegate OnTargetZiplineAnchorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FZiplineAttachedToOriginDelegate OnZiplineAttachedToOrigin;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UZiplineAnchor* CurrentAnchor;
    
    UPROPERTY(BlueprintReadOnly, Export, ReplicatedUsing=OnRep_OriginAnchor)
    UZiplineAnchor* OriginAnchor;
    
    UPROPERTY(Export)
    UCameraComponent* CameraComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AZiplineLine> LineClass;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float LerpTime;
    
    AZiplineSelectorPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetCurrentAnchor(UZiplineAnchor* ToOther);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCreateZipline(UZiplineAnchor* ToOther);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancel();
    
    UFUNCTION()
    void OnRep_OriginAnchor();
    
    UFUNCTION(BlueprintPure)
    bool IsValidAnchor(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintPure)
    bool IsSelectableAnchor(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintPure)
    bool IsConnectionBlocked(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintPure)
    bool IsAlreadyConnected(const UZiplineAnchor* Anchor);
    
    UFUNCTION()
    void HandleZiplineAttachedToOriginAnchor(UZiplineAnchor* Sender, AZiplineLine* Line);
    
    UFUNCTION(BlueprintPure)
    FString GetErrorString(const UZiplineAnchor* Anchor);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FRecipeRequirements> GetCurrentAnchorRequirements() const;
    
};

