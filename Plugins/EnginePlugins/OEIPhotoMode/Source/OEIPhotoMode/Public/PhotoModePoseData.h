#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhotoModePose.h"
#include "PhotoModePoseData.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModePoseData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModePose> Poses;
    
    UPhotoModePoseData();
};

