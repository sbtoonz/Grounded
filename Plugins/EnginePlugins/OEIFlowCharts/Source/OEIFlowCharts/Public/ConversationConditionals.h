#pragma once
#include "CoreMinimal.h"
#include "ConditionalLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ConversationConditionals.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UConversationConditionals();
    UFUNCTION(BlueprintCallable)
    static bool IsSpeakerDead(FGuid Speaker);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInstanceDead(FGuid Instance);
    
    UFUNCTION(BlueprintCallable)
    static bool HasConversationNodeBeenVisited(FGuid ConversationId, int32 NodeId);
    
};

