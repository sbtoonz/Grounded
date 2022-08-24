#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageInfo.h"
#include "InteractableInterface.h"
#include "OpenStateChangedDelegateDelegate.h"
#include "LockedChangedDelegateDelegate.h"
#include "Door.generated.h"

class UPersistenceComponent;
class UOCLComponent;
class UObsidianIDComponent;
class UTimelineComponent;
class UHealthComponent;
class UTerminalSwitchListener;

UCLASS(Blueprintable)
class MAINE_API ADoor : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockedChangedDelegate OnLockStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenStateChangedDelegate OnOpenStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTimelineComponent* TimelineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTerminalSwitchListener* TerminalSwitchListener;
    
public:
    ADoor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisualState(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnTimelineCoreEvent(int32 Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockStateChanged(bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnUpdateVisualState(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnLockStateChanged(bool IsLocked);
    
    
    // Fix for true pure virtual functions not being implemented
};

