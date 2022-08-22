#pragma once
#include "CoreMinimal.h"
#include "EHealthVisualState.h"
#include "HealthStateMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct MAINE_API FHealthStateMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EHealthVisualState HealthState;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMesh;
    
    FHealthStateMesh();
};

