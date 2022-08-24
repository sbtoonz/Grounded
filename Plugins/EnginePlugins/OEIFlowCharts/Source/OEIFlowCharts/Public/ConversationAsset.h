#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConversationBundle.h"
#include "ConversationAsset.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationBundle ConversationBundle;
    
public:
    UConversationAsset();
};

