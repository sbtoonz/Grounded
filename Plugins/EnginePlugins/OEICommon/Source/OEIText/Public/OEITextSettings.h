#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "StringTableBundleSets.h"
#include "OEITextSettings.generated.h"

class UStringTokensBundle;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEITEXT_API UOEITextSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLanguageCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultVOLanguageCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsDialects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FStringTableBundleSets> StringTableBundleSetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStringTokensBundle>> StringTokenBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SupportedVOLanguageCodes;
    
    UOEITextSettings();
};

