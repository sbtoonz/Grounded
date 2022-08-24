#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "VolumetricAudioEmitter.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class MAINE_API AVolumetricAudioEmitter : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    AVolumetricAudioEmitter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetAudioComponent() const;
    
};

