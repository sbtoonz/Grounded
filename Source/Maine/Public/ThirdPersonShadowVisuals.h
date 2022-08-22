#pragma once
#include "CoreMinimal.h"
#include "ThirdPersonShadowVisuals.generated.h"

class USkeletalMeshComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FThirdPersonShadowVisuals {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USkeletalMeshComponent* ShadowArmorMesh;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* OriginalArmorMesh;
    
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> ItemMeshes;
    
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> ItemOriginalMeshes;
    
    MAINE_API FThirdPersonShadowVisuals();
};

