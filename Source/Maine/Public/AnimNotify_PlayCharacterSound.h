#pragma once
#include "CoreMinimal.h"
#include "ECharacterAudioType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AnimNotify_PlayCharacterSound.generated.h"

UCLASS(CollapseCategories)
class MAINE_API UAnimNotify_PlayCharacterSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECharacterAudioType SoundType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag SoundTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UnderwaterParam;
    
    UAnimNotify_PlayCharacterSound();
};

