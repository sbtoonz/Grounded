#pragma once
#include "CoreMinimal.h"
#include "ThirdPersonShadowVisuals.generated.h"

class USkeletalMeshComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FThirdPersonShadowVisuals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ShadowArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OriginalArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ItemMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ItemOriginalMeshes;
    
    MAINE_API FThirdPersonShadowVisuals();
};

