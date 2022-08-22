#pragma once
#include "CoreMinimal.h"
#include "InstancedMeshKey.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct MAINE_API FInstancedMeshKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UInstancedStaticMeshComponent> InstancedStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MeshIndex;
    
    FInstancedMeshKey();
};

