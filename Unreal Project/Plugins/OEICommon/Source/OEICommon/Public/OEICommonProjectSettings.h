#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "OEICommonProjectSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class OEICOMMON_API UOEICommonProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> Packages;
    
    UPROPERTY(Config, EditAnywhere)
    FString CrashBuddyConfigFile;
    
    UPROPERTY(Config, EditAnywhere)
    float ChatterEventQueueTime;
    
    UPROPERTY(Config, EditAnywhere)
    float ChatterEventWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ChatterEventQueueProcessLimit;
    
private:
    UPROPERTY(Config, EditAnywhere)
    bool bShowTextReviewPrefixes;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath WorldRuntimeClassName;
    
    UPROPERTY(Config, EditAnywhere)
    FString ExportedFolder;
    
    UPROPERTY(Config, EditAnywhere)
    FString DesignSourceFolder;
    
    UPROPERTY(Config, EditAnywhere)
    FString DesignStagingFolder;
    
    UPROPERTY(Config, EditAnywhere)
    FString OverrideFolder;
    
    UPROPERTY(Config, EditAnywhere)
    FString QuickSaveFilename;
    
    UPROPERTY(Config, EditAnywhere)
    FString SaveBeforeLinkFilename;
    
    UPROPERTY(Config, EditAnywhere)
    FString AutoSaveFilename;
    
    UPROPERTY(Config, EditAnywhere)
    FString SaveFileExtension;
    
public:
    UOEICommonProjectSettings();
};

