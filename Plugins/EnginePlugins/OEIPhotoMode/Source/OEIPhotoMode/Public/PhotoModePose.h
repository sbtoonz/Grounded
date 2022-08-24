#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "PhotoModePose.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPhotoModePose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PoseMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlend;
    
    OEIPHOTOMODE_API FPhotoModePose();
};

