#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendFunction -FallbackName=EViewTargetBlendFunction
#include "ViewControl.generated.h"

class UCameraComponent;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UViewControl : public UInterface {
    GENERATED_BODY()
};

class IViewControl : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCamera(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCameraView(UObject* ViewProvider, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool bUsePawnLook);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCamera(UCameraComponent* InCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsViewControlledBySelf();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBlendInProgress();
    
};

