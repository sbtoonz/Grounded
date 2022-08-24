#pragma once
#include "CoreMinimal.h"
#include "PhotoModeHelperOptions.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeHelperOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RenderStateDirtyOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickableWhenPaused;
    
    OEIPHOTOMODE_API FPhotoModeHelperOptions();
};

