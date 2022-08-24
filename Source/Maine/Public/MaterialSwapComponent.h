#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorMaterialKey.h"
#include "MaterialInterfaceArray.h"
#include "EMaterialSwapLayer.h"
#include "MaterialSwapComponent.generated.h"

class UMaterialInterface;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaterialSwapComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FActorMaterialKey, FMaterialInterfaceArray> MaterialStacks;
    
public:
    UMaterialSwapComponent();
    UFUNCTION(BlueprintCallable)
    void SetMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaterials(EMaterialSwapLayer Layer, UMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex);
    
};

