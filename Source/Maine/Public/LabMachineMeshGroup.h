#pragma once
#include "CoreMinimal.h"
#include "LabMachineMeshGroup.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FLabMachineMeshGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> Cabinet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> Doodads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Trim;
    
    MAINE_API FLabMachineMeshGroup();
};

