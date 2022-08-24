#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationReference.generated.h"

class UConversationAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FConversationReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationAsset* ConversationAsset;
    
public:
    FConversationReference();
};

