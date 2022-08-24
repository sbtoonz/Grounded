#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshAttachment.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSkeletalMeshAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    MAINE_API FSkeletalMeshAttachment();
};

