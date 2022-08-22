#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "UIAudioData.generated.h"

class USoundBase;

USTRUCT()
struct MAINE_API FUIAudioData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Sound;
    
    FUIAudioData();
};

