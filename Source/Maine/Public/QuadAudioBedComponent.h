#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EQuadAudioSatelliteType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "QuadAudioBedComponent.generated.h"

class UQuadAudioSatelliteComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UQuadAudioBedComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TMap<EQuadAudioSatelliteType, UQuadAudioSatelliteComponent*> SatelliteComponentsMap;
    
public:
    UQuadAudioBedComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateZoneAmbience(const FDataTableRowHandle ZoneAudioDataTableRowHandle, bool bIsSubmerged);
    
};

