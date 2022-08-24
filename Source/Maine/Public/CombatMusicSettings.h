#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CombatMusicSettings.generated.h"

class UMusicTrackData;

USTRUCT(BlueprintType)
struct FCombatMusicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CombatMusicTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* CombatMusicTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    MAINE_API FCombatMusicSettings();
};

