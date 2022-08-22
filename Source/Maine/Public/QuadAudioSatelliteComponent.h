#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EQuadAudioSatelliteType.h"
#include "QuadAudioSatelliteComponent.generated.h"

class UAudioComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UQuadAudioSatelliteComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EQuadAudioSatelliteType SatelliteType;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* CurrentAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TArray<UAudioComponent*> FadingAudioComponents;
    
public:
    UQuadAudioSatelliteComponent();
};

