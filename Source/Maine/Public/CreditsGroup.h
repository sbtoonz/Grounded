#pragma once
#include "CoreMinimal.h"
#include "CreditsEntry.h"
#include "CreditsGroup.generated.h"

USTRUCT(BlueprintType)
struct FCreditsGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsEntry> Credits;
    
public:
    MAINE_API FCreditsGroup();
};

