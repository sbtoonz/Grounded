#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "DefensePointChargeDelegateDelegate.h"
#include "DefensePointStateChangeDelegateDelegate.h"
#include "DefensePointCompleteDelegateDelegate.h"
#include "EDefensePointState.h"
#include "DefensePointBuilding.generated.h"

class UDefensePointComponent;

UCLASS(Abstract)
class MAINE_API ADefensePointBuilding : public ABuilding {
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
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCullVisualUpdating;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCameraShaking;
    
public:
    ADefensePointBuilding();
protected:
    UFUNCTION()
    void NativeOnDefensePointStateChanged(EDefensePointState CurrentState);
    
    UFUNCTION()
    void NativeOnDefensePointComplete(bool bSuccess);
    
    UFUNCTION()
    void NativeOnChargeValueChanged(float ChargeRatio);
    
};

