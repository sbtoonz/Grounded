#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EVoiceOverAudioImplementationType.h"
#include "Engine/EngineTypes.h"
#include "OEIVoiceOverSettings.generated.h"

class UObject;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIVOICEOVER_API UOEIVoiceOverSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DefaultFaceRig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath CurveTableImportRoot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> PauseEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ResumeEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoiceOverAudioImplementationType AudioImplementation;
    
public:
    UOEIVoiceOverSettings();
};

