#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPhotoModeSetting.h"
#include "SettingInfo.h"
#include "PhotoModeSettingsData.generated.h"

class UColorGradingProfileData;

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhotoModeSetting, FSettingInfo> SettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UColorGradingProfileData* ColorGradingProfiles;
    
    UPhotoModeSettingsData();
};

