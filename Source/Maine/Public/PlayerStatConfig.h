#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LocString.h"
#include "PlayerStatConfig.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UPlayerStatConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayString;
    
    UPlayerStatConfig();
};

