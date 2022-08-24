#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChatterReference.generated.h"

class UChatterAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FChatterReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChatterAsset* ChatterAsset;
    
public:
    FChatterReference();
};

