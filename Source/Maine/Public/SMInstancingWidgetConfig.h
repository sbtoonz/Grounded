#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SMInstancingWidgetConfig.generated.h"

class UWorld;
class UStaticMesh;

UCLASS(BlueprintType)
class MAINE_API USMInstancingWidgetConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWorld* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NoSourceControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ConvertSublevels;
    
    USMInstancingWidgetConfig();
};

