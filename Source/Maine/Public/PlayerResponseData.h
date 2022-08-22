#pragma once
#include "CoreMinimal.h"
#include "PlayerResponseData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPlayerResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 NodeId;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayString;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasSeen;
    
    UPROPERTY(BlueprintReadOnly)
    bool RequiredNode;
    
    FPlayerResponseData();
};

