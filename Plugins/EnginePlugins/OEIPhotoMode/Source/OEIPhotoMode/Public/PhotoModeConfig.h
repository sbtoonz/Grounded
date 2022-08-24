#pragma once
#include "CoreMinimal.h"
#include "PhotoModeGeneralOptions.h"
#include "PhotoModeStorageOptions.h"
#include "PhotoModePawnOptions.h"
#include "PhotoModeUIOptions.h"
#include "PhotoModeConfig.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeGeneralOptions GeneralOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModePawnOptions PawnOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeStorageOptions StorageOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeUIOptions UIOptions;
    
    OEIPHOTOMODE_API FPhotoModeConfig();
};

