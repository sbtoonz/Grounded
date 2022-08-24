#pragma once
#include "CoreMinimal.h"
#include "AxisDirectionKey.h"
#include "ControlMetadata.h"
#include "ControlAxisMetadataPair.generated.h"

USTRUCT(BlueprintType)
struct FControlAxisMetadataPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxisDirectionKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlMetadata MetaData;
    
    MAINE_API FControlAxisMetadataPair();
};

