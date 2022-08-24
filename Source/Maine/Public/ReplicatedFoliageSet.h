#pragma once
#include "CoreMinimal.h"
#include "ReplicatedFoliageTypeData.h"
#include "ReplicatedFoliageSet.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct MAINE_API FReplicatedFoliageSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NotReplicated)
    TMap<TWeakObjectPtr<UInstancedStaticMeshComponent>, FReplicatedFoliageTypeData> Items;
    
    FReplicatedFoliageSet();
};

