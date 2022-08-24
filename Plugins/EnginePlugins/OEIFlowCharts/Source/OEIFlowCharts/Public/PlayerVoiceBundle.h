#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocString.h"
#include "PlayerVoiceBundle.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FPlayerVoiceBundle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VOPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
public:
    FPlayerVoiceBundle();
};

