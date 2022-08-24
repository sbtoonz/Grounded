#pragma once
#include "CoreMinimal.h"
#include "ConversationReference.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ConversationReferenceFuncLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class MAINE_API UConversationReferenceFuncLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationReferenceFuncLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FConversationReference Reference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildConversationString(const FGuid& ConversationId, int32 NodeId, AActor* OwnerActor);
    
};

