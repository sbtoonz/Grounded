#pragma once
#include "CoreMinimal.h"
#include "ManagedRenderTarget.generated.h"

class URenderTargetPublisher;
class IRenderTargetPublisher;
class URenderTargetSubscriber;
class IRenderTargetSubscriber;
class UManagedRenderTargetObject;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FManagedRenderTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IRenderTargetPublisher> Publisher;
    
    UPROPERTY()
    bool PublisherRequestedUnregister;
    
    UPROPERTY()
    TArray<TScriptInterface<IRenderTargetSubscriber>> Subscribers;
    
    UPROPERTY()
    UManagedRenderTargetObject* RenderTargetInfo;
    
    UPROPERTY()
    UTextureRenderTarget2D* RenderTarget;
    
    MAINE_API FManagedRenderTarget();
};

