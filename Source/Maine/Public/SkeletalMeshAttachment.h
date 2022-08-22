#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshAttachment.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSkeletalMeshAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FName SocketName;
    
    MAINE_API FSkeletalMeshAttachment();
};

