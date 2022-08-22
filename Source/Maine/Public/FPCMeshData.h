#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "FPCMeshData.generated.h"

class USkeletalMesh;
class UStaticMesh;
class UAnimMontage;
class UAnimInstance;

USTRUCT(BlueprintType)
struct FFPCMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UniqueVariant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UStaticMesh*> StaticMeshVariants;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USkeletalMesh*> SkeletalMeshVariants;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CastsShadow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    MAINE_API FFPCMeshData();
};

