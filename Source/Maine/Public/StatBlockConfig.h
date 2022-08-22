#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "EBlockType.h"
#include "StatBlockConfig.generated.h"

UCLASS()
class MAINE_API UStatBlockConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBlockType BlockType;
    
    UPROPERTY(EditAnywhere)
    bool bTrackCurrentInARowOnly;
    
    UStatBlockConfig();
};

