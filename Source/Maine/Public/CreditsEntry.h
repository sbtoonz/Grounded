#pragma once
#include "CoreMinimal.h"
#include "ECreditsDisplayType.h"
#include "CreditsEntry.generated.h"

USTRUCT(BlueprintType)
struct FCreditsEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FString DebugName;
    
    UPROPERTY(EditAnywhere)
    ECreditsDisplayType DisplayType;
    
    UPROPERTY(EditAnywhere)
    uint8 HeaderLevel;
    
    UPROPERTY(EditAnywhere)
    FString RawString;
    
    UPROPERTY(EditAnywhere)
    FString ImageKey;
    
    UPROPERTY(EditAnywhere)
    uint8 bRandomizeOrder: 1;
    
public:
    MAINE_API FCreditsEntry();
};

