#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "PlayerStatConfig.generated.h"

UCLASS(Abstract, BlueprintType)
class MAINE_API UPlayerStatConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString DisplayString;
    
    UPlayerStatConfig();
};

