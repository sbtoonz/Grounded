#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "WirePlacementComponent.generated.h"

class AActor;
class USplineMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWirePlacementComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* ConnectionStartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* PossibleConnectionEndActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, Transient, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* WireVisualsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* ConnectionVisualsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlacingWire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ConnectionVisuals;
    
public:
    UWirePlacementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTryEnterWirePlacementMode(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitWirePlacementMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDisconnectWire(AActor* InConnection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConnectWire();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateWireLocation(FVector Start, FVector End);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlacingWire() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnEnterWirePlacementMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExitWirePlacementMode();
    
};

