#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CharacterAudioData.generated.h"

class USoundBase;

UCLASS()
class MAINE_API UCharacterAudioData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, USoundBase*> TaggedSounds;
    
public:
    UCharacterAudioData();
};

