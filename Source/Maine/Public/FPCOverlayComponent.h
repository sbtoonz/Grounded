#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPCOverlayComponent.generated.h"

class USceneComponent;
class UFPCOverlayConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFPCOverlayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* OverlayRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayRootComponentDefaultForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPCOverlayConfigDataAsset* ConfigData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

