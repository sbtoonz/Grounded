#pragma once
#include "CoreMinimal.h"
#include "FPCMeshData.h"
#include "FPCOverlayConfig.generated.h"

USTRUCT(BlueprintType)
struct FFPCOverlayConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FFPCMeshData> MeshPieces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendTime;
    
    MAINE_API FFPCOverlayConfig();
};

