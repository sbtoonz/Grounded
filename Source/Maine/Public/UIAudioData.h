#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIAudioData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct MAINE_API FUIAudioData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    FUIAudioData();
};

