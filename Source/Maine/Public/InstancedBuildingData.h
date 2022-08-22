#pragma once
#include "CoreMinimal.h"
#include "InstancedBuildingTypeData.h"
#include "InstancedBuildingData.generated.h"

class UBuildingGridComponent;

USTRUCT(BlueprintType)
struct MAINE_API FInstancedBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, NotReplicated)
    UBuildingGridComponent* Grid;
    
    UPROPERTY(NotReplicated)
    TMap<UClass*, FInstancedBuildingTypeData> Items;
    
    UPROPERTY(NotReplicated)
    TArray<UClass*> ItemsKeys;
    
    FInstancedBuildingData();
};

