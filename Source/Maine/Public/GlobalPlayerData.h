#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GlobalPlayerData.generated.h"

class USoundCue;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalPlayerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* PlaceWaypointCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* RemoveWaypointCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ScanTargetCue;
    
    UGlobalPlayerData();
};

