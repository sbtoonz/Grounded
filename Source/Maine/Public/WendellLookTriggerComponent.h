#pragma once
#include "CoreMinimal.h"
#include "BaseLookTriggerComponent.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
#include "WendellLookTriggerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWendellLookTriggerComponent : public UBaseLookTriggerComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FConversationReference BanterConversation;
    
    UPROPERTY(EditAnywhere)
    int32 BanterStartNode;
    
public:
    UWendellLookTriggerComponent();
    
    // Fix for true pure virtual functions not being implemented
};

