#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "VolumetricAudioEmitter.generated.h"

class UAudioComponent;

UCLASS()
class MAINE_API AVolumetricAudioEmitter : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* AudioComponent;
    
public:
    AVolumetricAudioEmitter();
    UFUNCTION(BlueprintPure)
    UAudioComponent* GetAudioComponent() const;
    
};

