#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SMInstancingWidgetConfig.generated.h"

class UWorld;
class UStaticMesh;

UCLASS(Blueprintable)
class MAINE_API USMInstancingWidgetConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoSourceControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConvertSublevels;
    
    USMInstancingWidgetConfig();
};

