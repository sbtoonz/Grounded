#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoftSpeakerReference.generated.h"

class USpeakerAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FSoftSpeakerReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USpeakerAsset> SpeakerAsset;
    
public:
    FSoftSpeakerReference();
};

