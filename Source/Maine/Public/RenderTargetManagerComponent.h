#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManagedRenderTarget.h"
#include "RenderTargetManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API URenderTargetManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FManagedRenderTarget> ManagedRenderTargets;
    
public:
    URenderTargetManagerComponent();
};

