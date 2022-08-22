#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FPCOverlayComponent.generated.h"

class UFPCOverlayConfigDataAsset;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFPCOverlayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    USceneComponent* OverlayRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OverlayRootComponentDefaultForwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFPCOverlayConfigDataAsset* ConfigData;
    
    UPROPERTY(BlueprintReadWrite)
    FName CurrentConfigName;
    
    UFPCOverlayComponent();
    UFUNCTION(BlueprintCallable)
    void UpdatePositionForDynamicFOVChange();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePositionForAspectRatioChange();
    
    UFUNCTION(BlueprintCallable)
    void SetOverlay(FName ConfigName, int32 MeshVariant);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOverlay();
    
};

