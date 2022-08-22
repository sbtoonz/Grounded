#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHUDMarkerType.h"
#include "InputKeyData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EStatusEffectType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "HUDMarkerVariationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ERadialShortcut.h"
#include "RadialShortcutData.h"
#include "StatusEffectUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ReputationNotificationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "GlobalUIData.generated.h"

class UTexture2D;
class UWidgetManager;
class UInteractionWidget;
class UWindowWidget;
class UScriptStruct;
class UGlobalColorTheme;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalUIData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWidgetManager> WidgetManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UInteractionWidget> BurgleQuestsWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UInteractionWidget> ScienceStoreWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UInteractionWidget> UpgradesWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UWindowWidget> PauseWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> InGameMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> HotBarRadialMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> BuildingRadialMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> AmmoRadialMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> EmoteRadialMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> ChatRadialMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWindowWidget> ShortcutRadialMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FKey, FInputKeyData> KeyDisplayData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EHUDMarkerType, FHUDMarkerVariationData> HUDMarkerBrushes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FColor> HUDMarkerColorOptions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ERadialShortcut, FRadialShortcutData> RadialShortcutBrushes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EStatusEffectType, FStatusEffectUIData> StatusEffectUIData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FLocString> AttackSpeedNames;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FReputationNotificationData> ReputationNotificationData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FLocString> FactionLocStrings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* AutoSaveIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UScriptStruct* GlobalColorListType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGlobalColorTheme>> UIThemes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGlobalColorTheme>> AllUIThemes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGlobalColorTheme> DefaultUITheme;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGlobalColorTheme> DefaultNightUITheme;
    
    UGlobalUIData();
    UFUNCTION(BlueprintPure)
    int32 GetMarkerBuildingHiddenIconIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMarkerBuildingBurgleIconIndex() const;
    
    UFUNCTION(BlueprintPure)
    FString GetKeyNarrationName(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    FText GetChordNarrationName(const FInputChord& Chord) const;
    
};

