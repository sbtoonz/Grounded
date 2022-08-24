#pragma once
#include "CoreMinimal.h"
#include "PhotoModeUIOptions.generated.h"

class UPhotoModeSettingsData;

USTRUCT(BlueprintType)
struct FPhotoModeUIOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeSettingsData* SettingData;
    
    OEIPHOTOMODE_API FPhotoModeUIOptions();
};

