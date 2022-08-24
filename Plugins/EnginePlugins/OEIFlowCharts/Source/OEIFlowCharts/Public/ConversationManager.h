#pragma once
#include "CoreMinimal.h"
#include "SpeakerBundle.h"
#include "UObject/Object.h"
#include "ConversationNavigator.h"
#include "ConversationBundle.h"
#include "ConversationManager.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FConversationNavigator> ConversationNavigatorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FConversationBundle> OverrideBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSpeakerBundle> OverrideSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FConversationNavigator PeekNavigator;
    
public:
    UConversationManager();
};

