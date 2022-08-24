#pragma once
#include "CoreMinimal.h"
#include "ScriptLibrary.h"
#include "UObject/NoExportTypes.h"
#include "QuestScripts.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UQuestScripts();
    UFUNCTION(BlueprintCallable)
    static void TriggerQuestAddendum(FGuid QuestID, int32 AddendumID);
    
    UFUNCTION(BlueprintCallable)
    static void StartQuestWithAlternateDescription(FGuid QuestID, int32 QuestDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void StartQuest(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuestAlternateDescription(FGuid QuestID, int32 QuestDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectiveAlternateDescription(FGuid QuestID, int32 ObjectiveID, int32 ObjectiveDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void MentionQuest(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static void DebugAdvanceQuest(FGuid QuestID);
    
};

