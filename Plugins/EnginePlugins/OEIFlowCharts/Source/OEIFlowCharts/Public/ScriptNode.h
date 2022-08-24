#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "ScriptNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FScriptNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresValidChildNode;
    
public:
    FScriptNode();
};

