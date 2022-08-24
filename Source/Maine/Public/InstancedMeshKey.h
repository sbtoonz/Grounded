#pragma once
#include "CoreMinimal.h"
#include "InstancedMeshKey.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct MAINE_API FInstancedMeshKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UInstancedStaticMeshComponent> InstancedStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshIndex;
    
    FInstancedMeshKey();
};

