#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ESaveGameType.h"
#include "EGameMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EGameContentType.h"
#include "EGamePackageType.h"
#include "ESaveGamePlayerCountType.h"
#include "ESharedSaveState.h"
#include "ESaveGameHeaderDataValidity.h"
#include "ESharedSavePermissionsLevel.h"
#include "SaveGameHeaderData.generated.h"

UCLASS(BlueprintType)
class MAINE_API USaveGameHeaderData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString BuildNumberString;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SaveGameVersion;
    
    UPROPERTY(BlueprintReadOnly)
    ESaveGameType SaveGameType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AutoSaveIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid PlaythroughGuid;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime TimeOfSave;
    
    UPROPERTY(BlueprintReadOnly)
    int32 GameDay;
    
    UPROPERTY(BlueprintReadOnly)
    int32 GameHour;
    
    UPROPERTY(BlueprintReadOnly)
    int32 GameMinute;
    
    UPROPERTY(BlueprintReadOnly)
    FString LevelName;
    
    UPROPERTY(BlueprintReadOnly)
    FDataTableRowHandle ZoneRowHandle;
    
    UPROPERTY(BlueprintReadOnly)
    EGameMode GameMode;
    
    UPROPERTY(BlueprintReadOnly)
    EGamePackageType GamePackageType;
    
    UPROPERTY(BlueprintReadOnly)
    EGameContentType GameContentType;
    
    UPROPERTY(BlueprintReadOnly)
    ESaveGamePlayerCountType LastSavePlayerCountType;
    
    UPROPERTY(BlueprintReadWrite)
    FString SaveName;
    
    UPROPERTY(BlueprintReadWrite)
    FString PlaythroughName;
    
    UPROPERTY(BlueprintReadOnly)
    FString SaveFilePath;
    
    UPROPERTY(BlueprintReadOnly)
    FString SaveFolderName;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> ScreenshotBufferData;
    
    UPROPERTY(BlueprintReadOnly)
    ESaveGameHeaderDataValidity SaveGameValidity;
    
    UPROPERTY(BlueprintReadOnly)
    ESharedSaveState SharedSaveState;
    
    UPROPERTY(BlueprintReadOnly)
    ESharedSavePermissionsLevel SharedSaveAdminLevel;
    
    UPROPERTY(BlueprintReadOnly)
    FString SharedSaveID;
    
    UPROPERTY(BlueprintReadOnly)
    FString SharedSaveOwner;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrentSharedSaveHostName;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrentSharedSaveHostId;
    
    USaveGameHeaderData();
    UFUNCTION(BlueprintPure)
    bool IsSharedSave() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSaveGameScreenshotPath();
    
};

