#pragma once
#include "CoreMinimal.h"
#include "UpdateVisualStateDelegate.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "InteractableInterface.h"
#include "OpenStateChangedDelegateDelegate.h"
#include "LockedChangedDelegateDelegate.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "OCLComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UOCLComponent : public UActorComponent, public IPersistentInterface, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockedChangedDelegate OnLockedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenStateChangedDelegate OnOpenStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateVisualState OnUpdateVisualState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnlockAlsoOpens: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConsumeKey: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsLocked, meta=(AllowPrivateAccess=true))
    uint8 bIsLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOpen, meta=(AllowPrivateAccess=true))
    uint8 bIsOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowInteractToOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString OverrideLockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle KeyItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle KeyRecipeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideRecipeIfUnknown: 1;
    
public:
    UOCLComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Unlock(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void ToggleOpen(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLock(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void Open(AActor* InstigatedBy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOpen(bool bWasOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLocked();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyOpenStateChanged(bool bOpen, AActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintCallable)
    void Lock(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyToUnlock(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable)
    void Close(AActor* InstigatedBy);
    
    
    // Fix for true pure virtual functions not being implemented
};

