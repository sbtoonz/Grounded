#pragma once
#include "CoreMinimal.h"
#include "InteractionWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PlayerResponseData.h"
#include "ConversationWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UConversationWidget : public UInteractionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FGuid ConversationId;
    
public:
    UConversationWidget();
private:
    UFUNCTION(BlueprintCallable)
    void SelectPlayerResponse(int32 ResponseIndex);
    
    UFUNCTION(BlueprintPure)
    TArray<FPlayerResponseData> GetPlayerResponses();
    
    UFUNCTION(BlueprintCallable)
    void EndConversation();
    
    UFUNCTION(BlueprintCallable)
    void ContinueConversation();
    
};

