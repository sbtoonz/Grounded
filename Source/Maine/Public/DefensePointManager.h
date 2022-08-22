#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "DefensePointChargeDelegateDelegate.h"
#include "DefensePointStateChangeDelegateDelegate.h"
#include "DefensePointCompleteDelegateDelegate.h"
#include "EDefensePointState.h"
#include "DefensePointManager.generated.h"

class UDefensePointComponent;
class UPersistenceComponent;
class UObsidianIDComponent;

UCLASS()
class MAINE_API ADefensePointManager : public AActor, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDefensePointChargeDelegate OnChargeValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDefensePointCompleteDelegate OnDefensePointComplete;
    
    UPROPERTY(BlueprintAssignable)
    FDefensePointStateChangeDelegate OnDefensePointStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDefensePointComponent* DefensePointComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ADefensePointManager();
protected:
    UFUNCTION()
    void NativeOnDefensePointStateChanged(EDefensePointState CurrentState);
    
    UFUNCTION()
    void NativeOnDefensePointComplete(bool bSuccess);
    
    UFUNCTION()
    void NativeOnChargeValueChanged(float ChargeRatio);
    
public:
    UFUNCTION(BlueprintPure)
    static bool DefensePointDebugActive();
    
    
    // Fix for true pure virtual functions not being implemented
};

