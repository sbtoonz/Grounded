#pragma once
#include "CoreMinimal.h"
#include "AnyControlMappingKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "AnyControlMapping.generated.h"

USTRUCT(BlueprintType)
struct FAnyControlMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnyControlMappingKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputChord Chord;
    
    MAINE_API FAnyControlMapping();
};

