#pragma once
#include "CoreMinimal.h"
#include "BuildingGridISMKey.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBuildingGridISMKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    MAINE_API FBuildingGridISMKey();
};

