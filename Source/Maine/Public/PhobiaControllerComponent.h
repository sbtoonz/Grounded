#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhobiaMeshData.h"
#include "PhobiaControllerComponent.generated.h"

class UMaterialSwapComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPhobiaControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhobiaMeshData> MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaterialSwapComponent* MaterialSwapComponent;
    
public:
    UPhobiaControllerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSafeMode(int32 Setting);
    
};

