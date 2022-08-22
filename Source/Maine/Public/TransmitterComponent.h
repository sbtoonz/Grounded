#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "TransmitterComponent.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTransmitterComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag TransmittorTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* SignalAudioCue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SignalAudioRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SignalVolumeMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SignalVolumeMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SignalPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SignalPitchMin;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* SignalAudioComponent;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool bTransmissionEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSaveTransmissionState;
    
public:
    UTransmitterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTransmissionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsTransmissionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetTransmittorType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

