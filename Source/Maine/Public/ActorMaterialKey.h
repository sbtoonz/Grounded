#pragma once
#include "CoreMinimal.h"
#include "ActorMaterialKey.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FActorMaterialKey {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMeshComponent* MeshComponent;
    
    MAINE_API FActorMaterialKey();
};

