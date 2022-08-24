#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "EPhotoModeInputType.h"
#include "SliderSettings.h"
#include "SettingInfo.generated.h"

USTRUCT(BlueprintType)
struct FSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLocString> SettingTagToName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSliderSettings SliderSettings;
    
    OEIPHOTOMODE_API FSettingInfo();
};

