#pragma once
#include "CoreMinimal.h"
#include "Name_NetCrc.h"
#include "ItemKnowledge.generated.h"

USTRUCT(BlueprintType)
struct FItemKnowledge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName_NetCrc ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoesKnowOf: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasDiscovered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasResearched: 1;
    
    MAINE_API FItemKnowledge();
};

