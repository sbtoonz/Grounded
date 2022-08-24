#pragma once
#include "CoreMinimal.h"
#include "ScriptLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ConversationScripts.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UConversationScripts();
    UFUNCTION(BlueprintCallable)
    static void SetConversationCheckpoint(FGuid ConversationId, int32 CheckpointNodeID);
    
    UFUNCTION(BlueprintCallable)
    static void MarkConversationNodeAsRead(FGuid ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationNodeAsRead(FGuid ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationCheckpoint(FGuid ConversationId);
    
};

