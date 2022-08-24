#pragma once
#include "CoreMinimal.h"
#include "EHealthVisualState.h"
#include "HealthStateMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct MAINE_API FHealthStateMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthVisualState HealthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    FHealthStateMesh();
};

