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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IRenderTargetPublisher> Publisher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PublisherRequestedUnregister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IRenderTargetSubscriber>> Subscribers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManagedRenderTargetObject* RenderTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    MAINE_API FManagedRenderTarget();
};

