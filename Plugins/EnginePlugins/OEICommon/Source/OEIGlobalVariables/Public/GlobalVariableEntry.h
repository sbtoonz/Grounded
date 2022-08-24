#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableEntry.generated.h"

USTRUCT(BlueprintType)
struct FGlobalVariableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    OEIGLOBALVARIABLES_API FGlobalVariableEntry();
};

