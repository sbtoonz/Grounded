#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBoolResult.h"
#include "UObject/NoExportTypes.h"
#include "QuestConditionalsBP.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestConditionalsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestConditionalsBP();
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateVisited(FGuid QuestID, int32 NodeId, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateIrrelevant(FGuid QuestID, int32 NodeId, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateActive(FGuid QuestID, int32 NodeId, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStarted(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestMentioned(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestComplete(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeId, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailed(FGuid QuestID, int32 NodeId, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestFailed(FGuid QuestID, EBoolResult& OutResult);
    
};

