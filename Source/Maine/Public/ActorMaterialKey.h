#pragma once
#include "CoreMinimal.h"
#include "ActorMaterialKey.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FActorMaterialKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    MAINE_API FActorMaterialKey();
};

