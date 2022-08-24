#pragma once
#include "CoreMinimal.h"
#include "SMInstancerSharedMeshList.generated.h"

class AStaticMeshActor;
class AHISMActor;

USTRUCT(BlueprintType)
struct FSMInstancerSharedMeshList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> StaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHISMActor*> HISMActors;
    
    MAINE_API FSMInstancerSharedMeshList();
};

