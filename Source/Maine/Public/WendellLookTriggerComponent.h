#pragma once
#include "CoreMinimal.h"
#include "BaseLookTriggerComponent.h"
#include "PersistentInterface.h"
#include "ConversationReference.h"
#include "WendellLookTriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWendellLookTriggerComponent : public UBaseLookTriggerComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference BanterConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BanterStartNode;
    
public:
    UWendellLookTriggerComponent();
    
    // Fix for true pure virtual functions not being implemented
};

