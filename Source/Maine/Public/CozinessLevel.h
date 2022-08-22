#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "CozinessLevel.generated.h"

class UMusicTrackData;

USTRUCT(BlueprintType)
struct MAINE_API FCozinessLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 RequiredValue;
    
    UPROPERTY(EditDefaultsOnly)
    float BurgleQuestProgressLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BurgleQuestScienceReward;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> UnlockRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> UnlockPerks;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* DayTrack;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* NightTrack;
    
    FCozinessLevel();
};

