#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PhobiaMeshData.h"
#include "PhobiaControllerComponent.generated.h"

class UMaterialSwapComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPhobiaControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPhobiaMeshData> MeshData;
    
    UPROPERTY(Export)
    UMaterialSwapComponent* MaterialSwapComponent;
    
public:
    UPhobiaControllerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSafeMode(int32 Setting);
    
};

