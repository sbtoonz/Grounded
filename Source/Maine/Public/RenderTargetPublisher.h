#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RenderTargetPublisher.generated.h"

class UTextureRenderTarget2D;
class UManagedRenderTargetObject;

UINTERFACE(Blueprintable, MinimalAPI)
class URenderTargetPublisher : public UInterface {
    GENERATED_BODY()
};

class IRenderTargetPublisher : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterAsRenderTargetPublisher(UManagedRenderTargetObject* ManagedRTO);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterAsRenderTargetPublisher(UManagedRenderTargetObject* ManagedRTO);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPublisherRenderTargetWillBeDestroyed(UManagedRenderTargetObject* ManagedRTO, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPublisherRenderTargetCreated(UManagedRenderTargetObject* ManagedRTO, UTextureRenderTarget2D* RenderTarget);
    
};

