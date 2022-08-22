#pragma once
#include "CoreMinimal.h"
#include "HealthStateMesh.h"
#include "HealthStateMeshList.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FHealthStateMeshList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FHealthStateMesh> HealthStateMeshes;
    
    FHealthStateMeshList();
};

