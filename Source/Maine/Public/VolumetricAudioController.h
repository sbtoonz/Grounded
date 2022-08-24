#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VolumetricAudioController.generated.h"

class AVolumetricAudioEmitter;

UCLASS(Blueprintable)
class MAINE_API AVolumetricAudioController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolumetricAudioEmitter* AudioEmitter;
    
public:
    AVolumetricAudioController();
};

