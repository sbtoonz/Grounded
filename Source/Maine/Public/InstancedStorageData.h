#pragma once
#include "CoreMinimal.h"
#include "InstancedStorageData.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FInstancedStorageData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UInstancedStaticMeshComponent* ISMComponent;
    
    UPROPERTY(Transient)
    TMap<int32, int32> StorageToISMIndices;
    
    MAINE_API FInstancedStorageData();
};

