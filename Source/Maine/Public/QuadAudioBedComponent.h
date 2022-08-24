#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/SceneComponent.h"
#include "EQuadAudioSatelliteType.h"
#include "QuadAudioBedComponent.generated.h"

class UQuadAudioSatelliteComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UQuadAudioBedComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<EQuadAudioSatelliteType, UQuadAudioSatelliteComponent*> SatelliteComponentsMap;
    
public:
    UQuadAudioBedComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateZoneAmbience(const FDataTableRowHandle ZoneAudioDataTableRowHandle, bool bIsSubmerged);
    
};

