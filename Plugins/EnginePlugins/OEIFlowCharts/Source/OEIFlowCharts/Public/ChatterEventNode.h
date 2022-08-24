#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "UObject/NoExportTypes.h"
#include "ChatterEventNode.generated.h"

USTRUCT(BlueprintType)
struct FChatterEventNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EventId;
    
public:
    OEIFLOWCHARTS_API FChatterEventNode();
};

