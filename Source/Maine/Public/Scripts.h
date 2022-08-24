#pragma once
#include "CoreMinimal.h"
#include "ScriptLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Scripts.generated.h"

UCLASS(Blueprintable)
class MAINE_API UScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UScripts();
    UFUNCTION(BlueprintCallable)
    static void WendellMarkInteractionUsed();
    
    UFUNCTION(BlueprintCallable)
    static void WendellFollowListener();
    
    UFUNCTION(BlueprintCallable)
    static void OpenUpgradesUIForConversationOwner();
    
    UFUNCTION(BlueprintCallable)
    static void OpenScienceStoreUIForConversationOwner();
    
    UFUNCTION(BlueprintCallable)
    static void OpenBurgleQuestUIForConversationOwner();
    
    UFUNCTION(BlueprintCallable)
    static void LogObject(const FGuid& Object);
    
    UFUNCTION(BlueprintCallable)
    static void GiveSpeakerTechChip();
    
    UFUNCTION(BlueprintCallable)
    static void GiveSpeakerSuperTechChip();
    
    UFUNCTION(BlueprintCallable)
    static void GiveSpeakerAllNormalTechChips();
    
    UFUNCTION(BlueprintCallable)
    static void EndEarlyAccessContent();
    
};

