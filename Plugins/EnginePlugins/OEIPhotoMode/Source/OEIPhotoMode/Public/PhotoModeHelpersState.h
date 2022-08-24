#pragma once
#include "CoreMinimal.h"
#include "PhotoModeHelpersState.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeHelpersState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> MeshObjectIdToForcedLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrePhotoModeCustomTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrePhotoModeTickableWhenPaused;
    
    OEIPHOTOMODE_API FPhotoModeHelpersState();
};

