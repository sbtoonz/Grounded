#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELoadResetLevel.h"
#include "UObject/NoExportTypes.h"
#include "CustomLoadRestoreSettings.h"
#include "UObject/NoExportTypes.h"
#include "GameVersion.h"
#include "DataTableRowRedirects.h"
#include "GlobalSaveLoadData.generated.h"

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalSaveLoadData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftClassPath> ClassRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftObjectPath> DataTableRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FDataTableRowRedirects> DataTableRowRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadResetLevel, FCustomLoadRestoreSettings> CustomLoadRestoreSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameVersion QuestsRestructuredVersion;
    
    UGlobalSaveLoadData();
};

