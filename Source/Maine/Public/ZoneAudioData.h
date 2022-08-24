#pragma once
#include "CoreMinimal.h"
#include "ZoneReverbSettings.h"
#include "Engine/DataTable.h"
#include "ZoneAudioData.generated.h"

class UQuadAudioBedSounds;
class UDataTable;
class UMusicSettings;

USTRUCT(BlueprintType)
struct MAINE_API FZoneAudioData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OneShotTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuadAudioBedSounds* QuadAudioBedSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicSettings* OverrideMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneReverbSettings ReverbSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteriorAudio;
    
    FZoneAudioData();
};

