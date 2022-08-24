#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIScriptingSettings.generated.h"

class UGlobalScriptsBundle;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEISCRIPTING_API UOEIScriptingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGlobalScriptsBundle>> GlobalScriptsBundles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExportDataAssetEnums;
    
    UOEIScriptingSettings();
};

