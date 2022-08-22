#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConversationReferenceFuncLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class MAINE_API UConversationReferenceFuncLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationReferenceFuncLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsValid(FConversationReference Reference);
    
    UFUNCTION(BlueprintPure)
    static FString BuildConversationString(const FGuid& ConversationId, int32 NodeId, AActor* OwnerActor);
    
};

