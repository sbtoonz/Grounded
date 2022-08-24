#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBoolResult.h"
#include "UObject/NoExportTypes.h"
#include "ConversationConditionalsBP.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationConditionalsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationConditionalsBP();
    UFUNCTION(BlueprintCallable)
    static bool IsSpeakerDead(FGuid Speaker, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInstanceDead(FGuid Instance, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasConversationNodeBeenVisited(FGuid ConversationId, int32 NodeId, EBoolResult& OutResult);
    
};

