#pragma once
#include "CoreMinimal.h"
#include "ConversationReference.h"
#include "QuestReference.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpeakerReference.h"
#include "ChatterEventReference.h"
#include "UObject/NoExportTypes.h"
#include "OEIFlowChartLibrary.generated.h"

class UConversationAsset;
class USpeakerAsset;

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UOEIFlowChartLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIFlowChartLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSpeakerReference MakeSpeakerReferenceWithAsset(USpeakerAsset* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSpeakerReference MakeSpeakerReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuestReference MakeQuestReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FConversationReference MakeConversationReferenceWithAsset(UConversationAsset* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FConversationReference MakeConversationReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FChatterEventReference MakeChatterEventReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSpeakerID(const FSpeakerReference& Speaker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetQuestID(const FQuestReference& Quest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetConversationID(const FConversationReference& Conversation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetChatterEventID(const FChatterEventReference& ChatterEvent);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteOnUpdateScript(const FConversationReference& Conversation, int32 NodeId, FGuid ScriptID);
    
};

