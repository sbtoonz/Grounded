#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LookTriggeredParams.h"
#include "ConversationReference.h"
#include "BanterStarterComponent.generated.h"

class ASurvivalPlayerController;
class UBaseLookTriggerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBanterStarterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference BanterConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BanterStartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubscribeAutomatically;
    
public:
    UBanterStarterComponent();
    UFUNCTION(BlueprintCallable)
    void StartBanter(ASurvivalPlayerController* Instigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLookTriggered(UBaseLookTriggerComponent* Sender, FLookTriggeredParams Params);
    
};

