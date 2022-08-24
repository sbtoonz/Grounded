#pragma once
#include "CoreMinimal.h"
#include "InteractionWidget.h"
#include "UObject/NoExportTypes.h"
#include "PlayerResponseData.h"
#include "ConversationWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UConversationWidget : public UInteractionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConversationId;
    
public:
    UConversationWidget();
private:
    UFUNCTION(BlueprintCallable)
    void SelectPlayerResponse(int32 ResponseIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerResponseData> GetPlayerResponses();
    
    UFUNCTION(BlueprintCallable)
    void EndConversation();
    
    UFUNCTION(BlueprintCallable)
    void ContinueConversation();
    
};

