#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CombatMusicSettings.generated.h"

class UMusicTrackData;

USTRUCT(BlueprintType)
struct FCombatMusicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag CombatMusicTag;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* CombatMusicTrack;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Priority;
    
    MAINE_API FCombatMusicSettings();
};

