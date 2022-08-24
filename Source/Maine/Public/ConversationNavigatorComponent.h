#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnConversationNodeShowDelegate.h"
#include "OnConversationStartDelegate.h"
#include "OnConversationNodeHideDelegate.h"
#include "OnConversationCompleteDelegate.h"
#include "EConversationPlayPriority.h"
#include "EConversationNodeDisplayStyle.h"
#include "ActiveConversationData.h"
#include "LocString.h"
#include "BitArrayWrapper.h"
#include "ConversationPlayData.h"
#include "ConversationNavigatorComponent.generated.h"

class AActor;
class ASurvivalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UConversationNavigatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationNodeShow OnConversationNodeShowEarly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationNodeShow OnConversationNodeShow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationNodeHide OnConversationNodeHide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationStart OnConversationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationComplete OnConversationComplete;
    
    UConversationNavigatorComponent();
    UFUNCTION(BlueprintCallable)
    void StartLocalConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    bool ShowConversation();
    
private:
    UFUNCTION(BlueprintCallable)
    bool ShouldQueue(const FGuid& ConversationId, EConversationPlayPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldInterrupt(const FGuid& ConversationId, EConversationPlayPriority Priority);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectPlayerResponse(AActor* Owner, int32 ResponseNodeID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndPlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndConversation(const FGuid& ConversationId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAdvancePlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAdvanceConversation(const FGuid& ConversationId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbortConversations();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemovePlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION()
    void QueueConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartConversation(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayChatterNode(ASurvivalCharacter* OwnerActor, int32 NodeId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEndConversation(const FGuid& ConversationId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, const FBitArrayWrapper& ReadNodes, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
private:
    UFUNCTION()
    bool IsPlayerDrivenNode(TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle, FGuid ConversationNavigatorID);
    
    UFUNCTION()
    bool IsPlayerDrivenConversation(TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalConversationPlaying(AActor* OwnerActor, const FGuid& ConversationId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FConversationPlayData> GetConversationQueue();
    
    UFUNCTION(BlueprintCallable)
    void EndLocalConversation(AActor* OwnerActor, const FGuid& ConversationId);
    
private:
    UFUNCTION(BlueprintCallable)
    void EndConversation(const FGuid& ConversationId, bool bViaStartNewConversation);
    
    UFUNCTION()
    void AdvanceConversationAndUpdateReadNodes(AActor* OwnerActor, FLocString PlayerResponse, const FGuid& ConversationId, int32 NodeId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION()
    void AdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerDrivenConversation(const FActiveConversationData& Convo);
    
};

