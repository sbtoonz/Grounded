#pragma once
#include "CoreMinimal.h"
#include "MaterialInterfaceArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EMaterialSwapLayer.h"
#include "ActorMaterialKey.h"
#include "MaterialSwapComponent.generated.h"

class UMeshComponent;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaterialSwapComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<FActorMaterialKey, FMaterialInterfaceArray> MaterialStacks;
    
public:
    UMaterialSwapComponent();
    UFUNCTION(BlueprintCallable)
    void SetMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaterials(EMaterialSwapLayer Layer, UMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex);
    
};

