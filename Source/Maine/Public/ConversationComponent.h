#pragma once
#include "CoreMinimal.h"
#include "WidgetInteractComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
#include "EConversationNodeDisplayStyle.h"
#include "ConversationComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UConversationComponent : public UWidgetInteractComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FConversationReference Conversation;
    
    UPROPERTY(EditAnywhere)
    int32 StartNode;
    
public:
    UConversationComponent();
    UFUNCTION(BlueprintCallable)
    void StartInteractConversation(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void StartConversation(const FConversationReference& InConversation, int32 InStartNode, AActor* InstigatedBy, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION(BlueprintCallable)
    void EndConversation(AActor* InstigatedBy);
    
};

