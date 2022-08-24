#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "ZiplineAttachedToOriginDelegateDelegate.h"
#include "TargetZiplineAnchorChangedDelegateDelegate.h"
#include "RecipeRequirements.h"
#include "ZiplineSelectorPawn.generated.h"

class UZiplineAnchor;
class UCameraComponent;
class AZiplineLine;

UCLASS(Blueprintable)
class MAINE_API AZiplineSelectorPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetZiplineAnchorChangedDelegate OnTargetZiplineAnchorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZiplineAttachedToOriginDelegate OnZiplineAttachedToOrigin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UZiplineAnchor* CurrentAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, ReplicatedUsing=OnRep_OriginAnchor, meta=(AllowPrivateAccess=true))
    UZiplineAnchor* OriginAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZiplineLine> LineClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpTime;
    
    AZiplineSelectorPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCurrentAnchor(UZiplineAnchor* ToOther);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateZipline(UZiplineAnchor* ToOther);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OriginAnchor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAnchor(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectableAnchor(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectionBlocked(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlreadyConnected(const UZiplineAnchor* Anchor);
    
    UFUNCTION(BlueprintCallable)
    void HandleZiplineAttachedToOriginAnchor(UZiplineAnchor* Sender, AZiplineLine* Line);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetErrorString(const UZiplineAnchor* Anchor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRecipeRequirements> GetCurrentAnchorRequirements() const;
    
};

