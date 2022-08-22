#pragma once
#include "CoreMinimal.h"
#include "ItemDataPreloadAssets.generated.h"

class USoundBase;
class UCharacterAudioData;

USTRUCT(BlueprintType)
struct FItemDataPreloadAssets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCharacterAudioData* AudioData;
    
    UPROPERTY(Transient)
    USoundBase* BlockSound;
    
    UPROPERTY(Transient)
    USoundBase* PerfectBlockSound;
    
public:
    MAINE_API FItemDataPreloadAssets();
};

