#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHUDMarkerType.h"
#include "Engine/DataAsset.h"
#include "InputKeyData.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "HUDMarkerVariationData.h"
#include "RadialShortcutData.h"
#include "ERadialShortcut.h"
#include "EStatusEffectType.h"
#include "StatusEffectUIData.h"
#include "GameplayTagContainer.h"
#include "LocString.h"
#include "ReputationNotificationData.h"
#include "Framework/Commands/InputChord.h"
#include "GlobalUIData.generated.h"

class UWidgetManager;
class UInteractionWidget;
class UTexture2D;
class UWindowWidget;
class UScriptStruct;
class UGlobalColorTheme;

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalUIData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetManager> WidgetManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractionWidget> BurgleQuestsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractionWidget> ScienceStoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractionWidget> UpgradesWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWindowWidget> PauseWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> InGameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> HotBarRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> BuildingRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> AmmoRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> EmoteRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> ChatRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> ShortcutRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FInputKeyData> KeyDisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHUDMarkerType, FHUDMarkerVariationData> HUDMarkerBrushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> HUDMarkerColorOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERadialShortcut, FRadialShortcutData> RadialShortcutBrushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStatusEffectType, FStatusEffectUIData> StatusEffectUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLocString> AttackSpeedNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReputationNotificationData> ReputationNotificationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLocString> FactionLocStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AutoSaveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* GlobalColorListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGlobalColorTheme>> UIThemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGlobalColorTheme>> AllUIThemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGlobalColorTheme> DefaultUITheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGlobalColorTheme> DefaultNightUITheme;
    
    UGlobalUIData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarkerBuildingHiddenIconIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarkerBuildingBurgleIconIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetKeyNarrationName(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetChordNarrationName(const FInputChord& Chord) const;
    
};

