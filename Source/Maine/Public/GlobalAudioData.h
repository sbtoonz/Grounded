#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CombatMusicSettings.h"
#include "GlobalAudioData.generated.h"

class UHourBasedOneShotsData;
class UMusicSettings;
class USoundClass;
class UDataTable;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalAudioData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UMusicSettings* DefaultMusicSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag DefaultCombatMusicTag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCombatMusicSettings> CombatMusicList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* MasterSoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* MusicSoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* EffectsSoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* AmbienceSoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* UISoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* NarrationSoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundClass* VoiceSoundClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHourBasedOneShotsData* GlobalTimedOneShotsData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* UIAudioDataTable;
    
    UGlobalAudioData();
};

