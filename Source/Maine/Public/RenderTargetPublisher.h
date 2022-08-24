#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RenderTargetPublisher.generated.h"

class UManagedRenderTargetObject;
class UTextureRenderTarget2D;

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

