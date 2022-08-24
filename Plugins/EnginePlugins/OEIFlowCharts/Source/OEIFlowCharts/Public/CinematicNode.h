#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "UObject/NoExportTypes.h"
#include "CinematicNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FCinematicNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SequencePath;
    
public:
    FCinematicNode();
};

