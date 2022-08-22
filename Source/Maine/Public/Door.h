#pragma once
#include "CoreMinimal.h"
#include "OpenStateChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LockedChangedDelegateDelegate.h"
#include "InteractableInterface.h"
#include "DamageInfo.h"
#include "Door.generated.h"

class UPersistenceComponent;
class UOCLComponent;
class UObsidianIDComponent;
class UTimelineComponent;
class UHealthComponent;
class UTerminalSwitchListener;

UCLASS()
class MAINE_API ADoor : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FLockedChangedDelegate OnLockStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOpenStateChangedDelegate OnOpenStateChangedDelegate;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Export)
    UTimelineComponent* TimelineComponent;
    
    UPROPERTY(Export)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTerminalSwitchListener* TerminalSwitchListener;
    
public:
    ADoor();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateVisualState(bool IsOpen);
    
    UFUNCTION()
    void OnTimelineCoreEvent(int32 Event);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockStateChanged(bool IsLocked);
    
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void NativeOnUpdateVisualState(bool IsOpen);
    
    UFUNCTION()
    void NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator);
    
    UFUNCTION()
    void NativeOnLockStateChanged(bool IsLocked);
    
    
    // Fix for true pure virtual functions not being implemented
};

