#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RenderTargetSubscriber.generated.h"

class UTextureRenderTarget2D;
class UManagedRenderTargetObject;

UINTERFACE(Blueprintable, MinimalAPI)
class URenderTargetSubscriber : public UInterface {
    GENERATED_BODY()
};

class IRenderTargetSubscriber : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterAsRenderTargetSubscriber(UManagedRenderTargetObject* ManagedRTO);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterAsRenderTargetSubscriber(UManagedRenderTargetObject* ManagedRTO);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSubscribedRenderTargetWillBeUnavailable(UManagedRenderTargetObject* ManagedRTO, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSubscribedRenderTargetAvailable(UManagedRenderTargetObject* ManagedRTO, UTextureRenderTarget2D* RenderTarget);
    
};

