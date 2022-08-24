#pragma once
#include "CoreMinimal.h"
#include "DefensePointChargeDelegateDelegate.h"
#include "Building.h"
#include "DefensePointStateChangeDelegateDelegate.h"
#include "DefensePointCompleteDelegateDelegate.h"
#include "EDefensePointState.h"
#include "DefensePointBuilding.generated.h"

class UDefensePointComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ADefensePointBuilding : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointChargeDelegate OnChargeValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointCompleteDelegate OnDefensePointComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointStateChangeDelegate OnDefensePointStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDefensePointComponent* DefensePointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullVisualUpdating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraShaking;
    
public:
    ADefensePointBuilding();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnDefensePointStateChanged(EDefensePointState CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnDefensePointComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnChargeValueChanged(float ChargeRatio);
    
};

