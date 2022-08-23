#pragma once
#include "CoreMinimal.h"
#include "StringTableBundleSets.generated.h"

class UStringTableBundleSet;

USTRUCT(BlueprintType)
struct OEITEXT_API FStringTableBundleSets {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString LanguageCode;
    
    UPROPERTY(Config, EditAnywhere)
    FString PrimaryRegionCode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIsFallbackForLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> FallbackRegionCodes;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UStringTableBundleSet>> StringTableBundleSets;
    
    FStringTableBundleSets();
};

