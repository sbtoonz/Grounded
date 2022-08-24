#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPhotoPawnType.h"
#include "PhotoModePawnOptions.generated.h"

class APhotoPawn;

USTRUCT(BlueprintType)
struct FPhotoModePawnOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoPawnType DefaultPhotoPawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhotoPawn> FreeCamPhotoPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhotoPawn> SpringArmPhotoPawnClass;
    
    OEIPHOTOMODE_API FPhotoModePawnOptions();
};

