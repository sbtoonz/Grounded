#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StringTokensBundle.generated.h"

UCLASS()
class OEITEXT_API UStringTokensBundle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<FString> Tokens;
    
private:
    UPROPERTY()
    int32 Hash;
    
public:
    UStringTokensBundle();
};

