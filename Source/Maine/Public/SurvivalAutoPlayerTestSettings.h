#pragma once
#include "CoreMinimal.h"
#include "AutoConsoleCommandProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "AutoEquipmentProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "AutoRandomInputProperties.h"
#include "SurvivalAutoPlayerTestSettings.generated.h"

class UWorld;

UCLASS(Config=ProfileTools)
class USurvivalAutoPlayerTestSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bUseFixedRandomSeed;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FixedRandomSeed;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUsedFixedPlaythroughID;
    
    UPROPERTY(Config, EditAnywhere)
    FGuid FixedPlaythroughGuid;
    
    UPROPERTY(Config, EditAnywhere)
    float DeltaTimeCap;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableTimeCapIfLowFramerate;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DisableTimeCapFrameCount;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> TestLevels;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableTraveling;
    
    UPROPERTY(Config, EditAnywhere)
    float MinTravelTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxTravelTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowTravelingToCurrentMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanReturnToMainMenu;
    
    UPROPERTY(Config, EditAnywhere)
    float ChanceToReturnToMenu;
    
    UPROPERTY(Config, EditAnywhere)
    float MainMenuSoakTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableQuickSave;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableQuickSaveLoad;
    
    UPROPERTY(Config, EditAnywhere)
    bool bOnlyLoadQuickSavesMadeOnCurrentMap;
    
    UPROPERTY(Config, EditAnywhere)
    float MinQuickSaveWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxQuickSaveWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MinQuickLoadWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxQuickLoadWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGhost;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableRandomPathing;
    
    UPROPERTY(Config, EditAnywhere)
    float PathingNewLocationRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float PathingNewLocationHeightVariance;
    
    UPROPERTY(Config, EditAnywhere)
    bool bFaceAlongPath;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTeleportIfStuckPathing;
    
    UPROPERTY(Config, EditAnywhere)
    float PathingStuckTeleportRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float PathingVisitedTileSize;
    
    UPROPERTY(Config, EditAnywhere)
    float PathingGoalProjectionExtents;
    
    UPROPERTY(Config, EditAnywhere)
    float PathingVisitingRadius;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowControlRotationSnapping;
    
    UPROPERTY(Config, EditAnywhere)
    float MinSnapRotationWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSnapRotationWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    FVector SnapRotationAxis;
    
    UPROPERTY(Config, EditAnywhere)
    float MinSnapRotationAmount;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSnapRotationAmount;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableTeleporting;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTeleportPlaceOnGround;
    
    UPROPERTY(Config, EditAnywhere)
    float TeleportHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float TeleportNewLocationDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float MinTeleportWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxTeleportWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGodMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bResurrect;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAttackAI;
    
    UPROPERTY(Config, EditAnywhere)
    float MaximumAttackDistance;
    
    UPROPERTY(Config, EditAnywhere)
    bool bOnlyAttackEnemies;
    
    UPROPERTY(Config, EditAnywhere)
    float MinAttackWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAttackWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableWeaponSwapping;
    
    UPROPERTY(Config, EditAnywhere)
    float MinWeaponSwapWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxWeaponSwapWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableArmorSwapping;
    
    UPROPERTY(Config, EditAnywhere)
    float MinArmorSwapWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxArmorSwapWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableScreenshots;
    
    UPROPERTY(Config, EditAnywhere)
    float ScreenshotRate;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumberOfScreenshotsToKeep;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath ScreenshotDirectoryOverride;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableMemoryInfoLogging;
    
    UPROPERTY(Config, EditAnywhere)
    float MemoryInfoLogRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bLogMemoryInfoOnMapLoad;
    
    UPROPERTY(Config, EditAnywhere)
    bool bConsoleCommandsEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAutoConsoleCommandProperties> ConsoleCommandProperties;
    
    UPROPERTY(Config, EditAnywhere)
    bool bInfoTrackingEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    float InfoTrackingRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddReportTimeColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddEngineRuntimeColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddTestRuntimeColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddCurrentMapColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddReportTimeAndMapColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddEngineRuntimeAndMapColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddRuntimeAndMapColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAddPlayerLocationColumn;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTrackRenderTargetPoolUsage;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTrackAudioMemoryUsage;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTrackMemoryUsageInformation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTrackMemoryStatInformation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTrackTextureStreamingInformation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTryToFilterStatErrors;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> StatsToTrack;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGenerateMemoryReports;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> MemoryReportCommands;
    
    UPROPERTY(Config, EditAnywhere)
    float MemoryPeakIncreaseReportThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float MemoryUtilizationReportThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float ExtraMemoryUtilizationReportAmount;
    
    UPROPERTY(Config, EditAnywhere)
    float TexturePoolUtilizationReportThreadhold;
    
    UPROPERTY(Config, EditAnywhere)
    float ExtraTexturePoolUtilizationReportAmount;
    
    UPROPERTY(Config, EditAnywhere)
    float UtilizationReportThresholdResetTime;
    
    UPROPERTY(Config, EditAnywhere)
    float TexturePoolOverBudgetReportRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bInputEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAutoRandomInputProperties> RandomInputKeyProperties;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAutoEquipmentProperties> EquipmentProperties;
    
    USurvivalAutoPlayerTestSettings();
};

