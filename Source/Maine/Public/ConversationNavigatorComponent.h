#pragma once
#include "CoreMinimal.h"
#include "ActiveConversationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ConversationPlayData.h"
#include "OnConversationNodeShowDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OnConversationStartDelegate.h"
#include "OnConversationNodeHideDelegate.h"
#include "OnConversationCompleteDelegate.h"
#include "EConversationPlayPriority.h"
#include "EConversationNodeDisplayStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "BitArrayWrapper.h"
#include "ConversationNavigatorComponent.generated.h"

class AActor;
class ASurvivalCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UConversationNavigatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnConversationNodeShow OnConversationNodeShowEarly;
    
    UPROPERTY(BlueprintAssignable)
    FOnConversationNodeShow OnConversationNodeShow;
    
    UPROPERTY(BlueprintAssignable)
    FOnConversationNodeHide OnConversationNodeHide;
    
    UPROPERTY(BlueprintAssignable)
    FOnConversationStart OnConversationStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnConversationComplete OnConversationComplete;
    
    UConversationNavigatorComponent();
    UFUNCTION(BlueprintCallable)
    void StartLocalConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    bool ShowConversation();
    
private:
    UFUNCTION()
    bool ShouldQueue(const FGuid& ConversationId, EConversationPlayPriority Priority);
    
    UFUNCTION()
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
    UFUNCTION()
    void RemovePlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION()
    void QueueConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartConversation(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPlayChatterNode(ASurvivalCharacter* OwnerActor, int32 NodeId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastEndConversation(const FGuid& ConversationId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, const FBitArrayWrapper& ReadNodes, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
private:
    UFUNCTION()
    bool IsPlayerDrivenNode(TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle, FGuid ConversationNavigatorID);
    
    UFUNCTION()
    bool IsPlayerDrivenConversation(TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocalConversationPlaying(AActor* OwnerActor, const FGuid& ConversationId);
    
    UFUNCTION()
    TArray<FConversationPlayData> GetConversationQueue();
    
    UFUNCTION(BlueprintCallable)
    void EndLocalConversation(AActor* OwnerActor, const FGuid& ConversationId);
    
private:
    UFUNCTION()
    void EndConversation(const FGuid& ConversationId, bool bViaStartNewConversation);
    
    UFUNCTION()
    void AdvanceConversationAndUpdateReadNodes(AActor* OwnerActor, FLocString PlayerResponse, const FGuid& ConversationId, int32 NodeId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION()
    void AdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
    UFUNCTION()
    void AddPlayerDrivenConversation(const FActiveConversationData& Convo);
    
};

