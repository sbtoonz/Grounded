#pragma once
#include "CoreMinimal.h"
#include "PhobiaMaterialSetting.h"
#include "PhobiaSettingData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPhobiaSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPhobiaMaterialSetting> MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> HideBoneNames;
    
    FPhobiaSettingData();
};

