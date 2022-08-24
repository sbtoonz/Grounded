#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "StringTableBundleSets.h"
#include "OEITextSettings.generated.h"

class UStringTokensBundle;

UCLASS(DefaultConfig, Config=Game)
class OEITEXT_API UOEITextSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString DefaultLanguageCode;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaultVOLanguageCode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsDialects;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FStringTableBundleSets> StringTableBundleSetMap;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UStringTokensBundle>> StringTokenBundles;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> SupportedVOLanguageCodes;
    
    UOEITextSettings();
};

