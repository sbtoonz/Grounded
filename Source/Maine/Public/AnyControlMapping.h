#pragma once
#include "CoreMinimal.h"
#include "AnyControlMappingKey.h"
#include "Framework/Commands/InputChord.h"
#include "AnyControlMapping.generated.h"

USTRUCT(BlueprintType)
struct FAnyControlMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyControlMappingKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord Chord;
    
    MAINE_API FAnyControlMapping();
};

