#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "CharacterAudioData.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class MAINE_API UCharacterAudioData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USoundBase*> TaggedSounds;
    
public:
    UCharacterAudioData();
};

