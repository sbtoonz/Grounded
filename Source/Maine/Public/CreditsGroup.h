#pragma once
#include "CoreMinimal.h"
#include "CreditsEntry.h"
#include "CreditsGroup.generated.h"

USTRUCT(BlueprintType)
struct FCreditsGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString DebugName;
    
    UPROPERTY(EditAnywhere)
    FString Content;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCreditsEntry> Credits;
    
public:
    MAINE_API FCreditsGroup();
};

