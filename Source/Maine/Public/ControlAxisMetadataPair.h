#pragma once
#include "CoreMinimal.h"
#include "AxisDirectionKey.h"
#include "ControlMetadata.h"
#include "ControlAxisMetadataPair.generated.h"

USTRUCT()
struct FControlAxisMetadataPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAxisDirectionKey Key;
    
    UPROPERTY(EditDefaultsOnly)
    FControlMetadata MetaData;
    
    MAINE_API FControlAxisMetadataPair();
};

