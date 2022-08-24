#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StringTokensBundle.generated.h"

UCLASS(Blueprintable)
class OEITEXT_API UStringTokensBundle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> Tokens;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
public:
    UStringTokensBundle();
};

