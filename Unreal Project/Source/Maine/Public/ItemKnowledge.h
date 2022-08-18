#pragma once
#include "CoreMinimal.h"
// #include "Name_NetCrc.h"
#include "ItemKnowledge.generated.h"

USTRUCT(BlueprintType)
struct FItemKnowledge {
    GENERATED_BODY()
public:
    // UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    // FName_NetCrc ResourceName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDoesKnowOf: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasDiscovered: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasResearched: 1;
    
    MAINE_API FItemKnowledge();
};

