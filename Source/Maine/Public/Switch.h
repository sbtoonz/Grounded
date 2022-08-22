#pragma once
#include "CoreMinimal.h"
#include "OpenStateChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LockedChangedDelegateDelegate.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "ESwitchMode.h"
#include "Switch.generated.h"

class UPersistenceComponent;
class UOCLComponent;
class UObsidianIDComponent;

UCLASS()
class MAINE_API ASwitch : public AActor, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FLockedChangedDelegate OnLockStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOpenStateChangedDelegate OnOpenStateChangedDelegate;
    
    UPROPERTY(EditAnywhere)
    ESwitchMode SwitchMode;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint32 NumUsesRemaining;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ASwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetUsesRemaining(float UsesRemaining);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateVisualState(bool IsOpen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockStateChanged(bool IsLocked);
    
    UFUNCTION()
    void NativeOnUpdateVisualState(bool IsOpen);
    
    UFUNCTION()
    void NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION()
    void NativeOnLockStateChanged(bool IsLocked);
    
    
    // Fix for true pure virtual functions not being implemented
};

