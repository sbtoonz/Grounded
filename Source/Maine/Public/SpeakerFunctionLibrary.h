#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerBundle -FallbackName=SpeakerBundle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EOEIGender -FallbackName=EOEIGender
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "SpeakerFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API USpeakerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpeakerFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FString GetSpeakerBundleVOPrefix(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintPure)
    static FString GetSpeakerBundleObjectName(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintPure)
    static bool GetSpeakerBundleIsUniqueNPC(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintPure)
    static FGuid GetSpeakerBundleID(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintPure)
    static EOEIGender GetSpeakerBundleGender(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintPure)
    static FLocString GetSpeakerBundleDisplayName(const FSpeakerBundle& Bundle);
    
    UFUNCTION(BlueprintPure)
    static FGuid GetSpeakerBundleChatterFileID(const FSpeakerBundle& Bundle);
    
};

