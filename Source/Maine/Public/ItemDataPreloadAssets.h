#pragma once
#include "CoreMinimal.h"
#include "ItemDataPreloadAssets.generated.h"

class UCharacterAudioData;
class USoundBase;

USTRUCT(BlueprintType)
struct FItemDataPreloadAssets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterAudioData* AudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* BlockSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* PerfectBlockSound;
    
public:
    MAINE_API FItemDataPreloadAssets();
};

