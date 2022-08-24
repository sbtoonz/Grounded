#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "OpenStateChangedDelegateDelegate.h"
#include "LockedChangedDelegateDelegate.h"
#include "ESwitchMode.h"
#include "Switch.generated.h"

class UPersistenceComponent;
class UOCLComponent;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class MAINE_API ASwitch : public AActor, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockedChangedDelegate OnLockStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenStateChangedDelegate OnOpenStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchMode SwitchMode;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint32 NumUsesRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ASwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetUsesRemaining(float UsesRemaining);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisualState(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockStateChanged(bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnUpdateVisualState(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnLockStateChanged(bool IsLocked);
    
    
    // Fix for true pure virtual functions not being implemented
};

