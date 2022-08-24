#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OEIMovieSubtitleData.generated.h"

class UObject;
class UOEISubtitleData;

UCLASS(Blueprintable)
class OEIMOVIEPLAYER_API UOEIMovieSubtitleData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UObject>, UOEISubtitleData*> SubtitleData;
    
public:
    UOEIMovieSubtitleData();
};

