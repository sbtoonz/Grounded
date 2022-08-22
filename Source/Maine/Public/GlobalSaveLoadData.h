#pragma once
#include "CoreMinimal.h"
#include "GameVersion.h"
#include "DataTableRowRedirects.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CustomLoadRestoreSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ELoadResetLevel.h"
#include "GlobalSaveLoadData.generated.h"

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalSaveLoadData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FSoftClassPath> ClassRedirects;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FSoftObjectPath> DataTableRedirects;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FSoftObjectPath, FDataTableRowRedirects> DataTableRowRedirects;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ELoadResetLevel, FCustomLoadRestoreSettings> CustomLoadRestoreSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameVersion QuestsRestructuredVersion;
    
    UGlobalSaveLoadData();
};

