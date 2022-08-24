#pragma once
#include "CoreMinimal.h"
#include "SpeakerInfo.h"
#include "GameFramework/Actor.h"
#include "OEIVoiceOverActor.h"
#include "LocString.h"
#include "SpeakerReference.h"
#include "SimpleSpeaker.generated.h"

UCLASS(Blueprintable)
class MAINE_API ASimpleSpeaker : public AActor, public IOEIVoiceOverActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerInfo SpeakerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString CharacterName;
    
public:
    ASimpleSpeaker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSpeakerReference GetSpeaker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLocString GetCharacterName() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

