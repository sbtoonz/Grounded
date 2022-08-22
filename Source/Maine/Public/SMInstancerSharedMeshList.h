#pragma once
#include "CoreMinimal.h"
#include "SMInstancerSharedMeshList.generated.h"

class AStaticMeshActor;
class AHISMActor;

USTRUCT()
struct FSMInstancerSharedMeshList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AStaticMeshActor*> StaticMeshActors;
    
    UPROPERTY()
    TArray<AHISMActor*> HISMActors;
    
    MAINE_API FSMInstancerSharedMeshList();
};

