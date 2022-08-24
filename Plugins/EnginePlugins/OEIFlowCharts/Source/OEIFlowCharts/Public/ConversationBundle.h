#pragma once
#include "CoreMinimal.h"
#include "DialogueLink.h"
#include "EConversationType.h"
#include "FlowChartBundle.h"
#include "SpeakerReference.h"
#include "TalkNode.h"
#include "UObject/NoExportTypes.h"
#include "ScriptNode.h"
#include "PlayerResponseNode.h"
#include "CheckpointBranchNode.h"
#include "CinematicNode.h"
#include "TriggerConversationNode.h"
#include "ResumeNode.h"
#include "GuidSet.h"
#include "UObject/NoExportTypes.h"
#include "ConversationBundle.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FConversationBundle : public FFlowChartBundle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConversationType ConversationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResumeNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSpeakerReference> SpeakerReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> RequiredSpeakerIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueLink> DialogueLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkNode> TalkNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerResponseNode> PlayerResponseNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptNode> ScriptNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCinematicNode> CinematicNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerConversationNode> TriggerConversationNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResumeNode> ResumeNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckpointBranchNode> CheckpointBranchNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGuidSet> GenericVoicePrintLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> GenericSpeakerIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ConversationRuntimeDataPath;
    
public:
    FConversationBundle();
};

