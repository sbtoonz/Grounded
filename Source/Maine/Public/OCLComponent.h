#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OpenStateChangedDelegateDelegate.h"
#include "LockedChangedDelegateDelegate.h"
#include "UpdateVisualStateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "OCLComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UOCLComponent : public UActorComponent, public IPersistentInterface, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLockedChangedDelegate OnLockedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOpenStateChangedDelegate OnOpenStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateVisualState OnUpdateVisualState;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bStartLocked: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUnlockAlsoOpens: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bConsumeKey: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsLocked)
    uint8 bIsLocked: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOpen)
    uint8 bIsOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowInteractToOpen: 1;
    
    UPROPERTY(EditAnywhere)
    FLocString OverrideLockedText;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle KeyItemData;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle KeyRecipeData;
    
    UPROPERTY(EditAnywhere)
    int32 KeyCount;
    
    UPROPERTY(EditAnywhere)
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
    UFUNCTION()
    void OnRep_IsOpen(bool bWasOpen);
    
    UFUNCTION()
    void OnRep_IsLocked();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyOpenStateChanged(bool bOpen, AActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintCallable)
    void Lock(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool HasKeyToUnlock(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable)
    void Close(AActor* InstigatedBy);
    
    
    // Fix for true pure virtual functions not being implemented
};

