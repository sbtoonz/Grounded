#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerReference -FallbackName=SpeakerReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIVoiceOver -ObjectName=OEIVoiceOverActor -FallbackName=OEIVoiceOverActor
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerInfo -FallbackName=SpeakerInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "SimpleSpeaker.generated.h"

UCLASS()
class MAINE_API ASimpleSpeaker : public AActor, public IOEIVoiceOverActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSpeakerInfo SpeakerInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString CharacterName;
    
public:
    ASimpleSpeaker();
    UFUNCTION(BlueprintPure)
    FSpeakerReference GetSpeaker();
    
    UFUNCTION(BlueprintPure)
    FLocString GetCharacterName() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

