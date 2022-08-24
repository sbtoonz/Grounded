#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpeakerReference.generated.h"

class USpeakerAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FSpeakerReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpeakerAsset* SpeakerAsset;
    
public:
    FSpeakerReference();
};

