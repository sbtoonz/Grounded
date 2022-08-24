#pragma once
#include "CoreMinimal.h"
#include "PhobiaMaterialSetting.h"
#include "PhobiaSettingData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPhobiaSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhobiaMaterialSetting> MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HideBoneNames;
    
    FPhobiaSettingData();
};

