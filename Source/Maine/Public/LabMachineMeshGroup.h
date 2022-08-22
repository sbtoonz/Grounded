#pragma once
#include "CoreMinimal.h"
#include "LabMachineMeshGroup.generated.h"

class UStaticMesh;

USTRUCT()
struct FLabMachineMeshGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UStaticMesh*> Cabinet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UStaticMesh*> Doodads;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* Trim;
    
    MAINE_API FLabMachineMeshGroup();
};

