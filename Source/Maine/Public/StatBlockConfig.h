#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "EBlockType.h"
#include "StatBlockConfig.generated.h"

UCLASS(Blueprintable)
class MAINE_API UStatBlockConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockType BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackCurrentInARowOnly;
    
    UStatBlockConfig();
};

