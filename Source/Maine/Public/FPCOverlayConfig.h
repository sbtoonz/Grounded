#pragma once
#include "CoreMinimal.h"
#include "FPCMeshData.h"
#include "FPCOverlayConfig.generated.h"

USTRUCT(BlueprintType)
struct FFPCOverlayConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFPCMeshData> MeshPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    MAINE_API FFPCOverlayConfig();
};

