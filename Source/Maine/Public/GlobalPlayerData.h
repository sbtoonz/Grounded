#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalPlayerData.generated.h"

class USoundCue;

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalPlayerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PlaceWaypointCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RemoveWaypointCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ScanTargetCue;
    
    UGlobalPlayerData();
};

