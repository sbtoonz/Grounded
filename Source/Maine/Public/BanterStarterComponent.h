#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LookTriggeredParams.h"
#include "BanterStarterComponent.generated.h"

class ASurvivalPlayerController;
class UBaseLookTriggerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBanterStarterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FConversationReference BanterConversation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BanterStartNode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSubscribeAutomatically;
    
public:
    UBanterStarterComponent();
    UFUNCTION(BlueprintCallable)
    void StartBanter(ASurvivalPlayerController* Instigator);
    
protected:
    UFUNCTION()
    void OnLookTriggered(UBaseLookTriggerComponent* Sender, FLookTriggeredParams Params);
    
};

