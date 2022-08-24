#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuidSet.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FGuidSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> IDs;
    
    FGuidSet();
};

