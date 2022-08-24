#pragma once
#include "CoreMinimal.h"
#include "WidgetInteractComponent.h"
#include "ConversationReference.h"
#include "EConversationNodeDisplayStyle.h"
#include "ConversationComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UConversationComponent : public UWidgetInteractComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

