#pragma once
#include "CoreMinimal.h"
#include "StringTableBundleSets.generated.h"

class UStringTableBundleSet;

USTRUCT(BlueprintType)
struct OEITEXT_API FStringTableBundleSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageCode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimaryRegionCode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFallbackForLanguage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FallbackRegionCodes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStringTableBundleSet>> StringTableBundleSets;
    
    FStringTableBundleSets();
};

