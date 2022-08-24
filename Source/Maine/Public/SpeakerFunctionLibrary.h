#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpeakerBundle.h"
#include "UObject/NoExportTypes.h"
#include "EOEIGender.h"
#include "SpeakerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API USpeakerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpeakerFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSpeakerBundleVOPrefix(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSpeakerBundleObjectName(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSpeakerBundleIsUniqueNPC(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSpeakerBundleID(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EOEIGender GetSpeakerBundleGender(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocString GetSpeakerBundleDisplayName(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSpeakerBundleChatterFileID(const FSpeakerBundle& Bundle);
    
};

