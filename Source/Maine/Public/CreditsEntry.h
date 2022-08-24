#pragma once
#include "CoreMinimal.h"
#include "ECreditsDisplayType.h"
#include "CreditsEntry.generated.h"

USTRUCT(BlueprintType)
struct FCreditsEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditsDisplayType DisplayType;
    
    UPROPERTY(EditAnywhere)
    uint8 HeaderLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RawString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomizeOrder: 1;
    
public:
    MAINE_API FCreditsEntry();
};

