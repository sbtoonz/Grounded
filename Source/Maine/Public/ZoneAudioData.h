#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ZoneReverbSettings.h"
#include "ZoneAudioData.generated.h"

class UQuadAudioBedSounds;
class UDataTable;
class UMusicSettings;

USTRUCT(BlueprintType)
struct MAINE_API FZoneAudioData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* OneShotTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UQuadAudioBedSounds* QuadAudioBedSounds;
    
    UPROPERTY(EditAnywhere)
    UMusicSettings* OverrideMusicSettings;
    
    UPROPERTY(EditAnywhere)
    FZoneReverbSettings ReverbSettings;
    
    UPROPERTY(EditAnywhere)
    bool bInteriorAudio;
    
    FZoneAudioData();
};

