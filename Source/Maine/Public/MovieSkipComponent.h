#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPlayerBeganSkipRequestDelegate.h"
#include "OnPlayerSkipRequestCompletedDelegate.h"
#include "OnPlayerSkipRequestCanceledDelegate.h"
#include "OnAllPlayersSkippedDelegate.h"
#include "MovieSkipComponent.generated.h"

class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMovieSkipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBeganSkipRequest OnPlayerBeganSkipRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSkipRequestCompleted OnPlayerSkipRequestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSkipRequestCanceled OnPlayerSkipRequestCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersSkipped OnAllPlayersSkipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void RemoveSkippingPlayer(APlayerState* Player);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSkipRequestSucceeded(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSkipRequestCanceled(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMovieStarted(FName MovieName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMovieFinished(FName MovieName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBeginRequestSkip(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAllSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRequestingSkip(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkipProgress(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidPlayerSuccessfullySkip(APlayerState* Player) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSkippingPlayer(APlayerState* Player);
    
};

