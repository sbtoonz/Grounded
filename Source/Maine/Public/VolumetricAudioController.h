#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VolumetricAudioController.generated.h"

class AVolumetricAudioEmitter;

UCLASS()
class MAINE_API AVolumetricAudioController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    AVolumetricAudioEmitter* AudioEmitter;
    
public:
    AVolumetricAudioController();
};

