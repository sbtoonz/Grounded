#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=Name_NetCrc -FallbackName=Name_NetCrc
#include "ItemKnowledge.generated.h"

USTRUCT(BlueprintType)
struct FItemKnowledge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName_NetCrc ResourceName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDoesKnowOf: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasDiscovered: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasResearched: 1;
    
    MAINE_API FItemKnowledge();
};

