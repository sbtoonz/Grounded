#pragma once
#include "CoreMinimal.h"
#include "ScriptNode.h"
#include "UObject/NoExportTypes.h"
#include "ChatterBranchNode.generated.h"

USTRUCT(BlueprintType)
struct FChatterBranchNode : public FScriptNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EventId;
    
public:
    OEIFLOWCHARTS_API FChatterBranchNode();
};

