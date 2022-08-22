#pragma once
#include "CoreMinimal.h"
#include "BuildingGridISMKey.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBuildingGridISMKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* Class;
    
    UPROPERTY()
    UStaticMesh* Mesh;
    
    MAINE_API FBuildingGridISMKey();
};

