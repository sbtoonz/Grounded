#pragma once
#include "CoreMinimal.h"
#include "VoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FVoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    INTERFACENARRATION_API FVoiceInfo();
};

