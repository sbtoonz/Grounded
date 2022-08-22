#pragma once
#include "CoreMinimal.h"
#include "OnPlayerBeganSkipRequestDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnPlayerSkipRequestCompletedDelegate.h"
#include "OnPlayerSkipRequestCanceledDelegate.h"
#include "OnAllPlayersSkippedDelegate.h"
#include "MovieSkipComponent.generated.h"

class APlayerState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMovieSkipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerBeganSkipRequest OnPlayerBeganSkipRequest;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerSkipRequestCompleted OnPlayerSkipRequestCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerSkipRequestCanceled OnPlayerSkipRequestCanceled;
    
    UPROPERTY(BlueprintAssignable)
    FOnAllPlayersSkipped OnAllPlayersSkipped;
    
    UPROPERTY(EditDefaultsOnly)
    bool HoldToSkip;
    
    UPROPERTY(EditDefaultsOnly)
    float HoldToSkipTime;
    
    UMovieSkipComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSkipRequestCanceled(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnMovieStarted(FName MovieName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnMovieFinished(FName MovieName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBeginRequestSkip(APlayerState* Player);
    
protected:
    UFUNCTION()
    void RemoveSkippingPlayer(APlayerState* Player);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSkipRequestSucceeded(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSkipRequestCanceled(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMovieStarted(FName MovieName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMovieFinished(FName MovieName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBeginRequestSkip(APlayerState* Player);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAllSkipped();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerRequestingSkip(APlayerState* Player) const;
    
    UFUNCTION(BlueprintPure)
    float GetSkipProgress(APlayerState* Player) const;
    
    UFUNCTION(BlueprintPure)
    bool DidPlayerSuccessfullySkip(APlayerState* Player) const;
    
protected:
    UFUNCTION()
    void AddSkippingPlayer(APlayerState* Player);
    
};

