#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ConversationScriptsBP.generated.h"

UCLASS(Blueprintable)
class UConversationScriptsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationScriptsBP();
    UFUNCTION(BlueprintCallable)
    static void SetConversationCheckpoint(FGuid ConversationId, int32 CheckpointNodeID);
    
    UFUNCTION(BlueprintCallable)
    static void MarkConversationNodeAsRead(FGuid ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationNodeAsRead(FGuid ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationCheckpoint(FGuid ConversationId);
    
};

