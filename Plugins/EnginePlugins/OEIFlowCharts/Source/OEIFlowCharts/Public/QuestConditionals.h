#pragma once
#include "CoreMinimal.h"
#include "ConditionalLibrary.h"
#include "UObject/NoExportTypes.h"
#include "QuestConditionals.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UQuestConditionals();
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateVisited(FGuid QuestID, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateIrrelevant(FGuid QuestID, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateActive(FGuid QuestID, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStarted(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestMentioned(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestEventTriggered(FGuid QuestID, int32 QuestEventID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestComplete(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestActive(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailed(FGuid QuestID, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestFailed(FGuid QuestID);
    
};

