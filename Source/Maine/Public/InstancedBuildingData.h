#pragma once
#include "CoreMinimal.h"
#include "InstancedBuildingTypeData.h"
#include "InstancedBuildingData.generated.h"

class UBuildingGridComponent;

USTRUCT(BlueprintType)
struct MAINE_API FInstancedBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UBuildingGridComponent* Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FInstancedBuildingTypeData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ItemsKeys;
    
    FInstancedBuildingData();
};

