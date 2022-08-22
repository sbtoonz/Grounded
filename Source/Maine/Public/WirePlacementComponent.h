#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WirePlacementComponent.generated.h"

class AActor;
class USplineMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWirePlacementComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    AActor* ConnectionStartActor;
    
    UPROPERTY(Replicated)
    AActor* PossibleConnectionEndActor;
    
    UPROPERTY(Export, Replicated, Transient)
    USplineMeshComponent* WireVisualsInstance;
    
    UPROPERTY(Replicated, Transient)
    AActor* ConnectionVisualsActor;
    
    UPROPERTY(Replicated, Transient)
    bool IsPlacingWire;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> ConnectionVisuals;
    
public:
    UWirePlacementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerTryEnterWirePlacementMode(AActor* Target);
    
    UFUNCTION(Reliable, Server)
    void ServerExitWirePlacementMode();
    
    UFUNCTION(Reliable, Server)
    void ServerDisconnectWire(AActor* InConnection);
    
    UFUNCTION(Reliable, Server)
    void ServerConnectWire();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastUpdateWireLocation(FVector Start, FVector End);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsPlacingWire() const;
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientOnEnterWirePlacementMode();
    
    UFUNCTION(Client, Reliable)
    void ClientExitWirePlacementMode();
    
};

