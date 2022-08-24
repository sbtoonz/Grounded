#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInterfaceNarrationPriority.h"
#include "NarrationChunk.h"
#include "InterfaceNarrationLibrary.generated.h"

class UNarratableUserWidget;
class UObject;
class UWidget;

UCLASS(Blueprintable)
class INTERFACENARRATION_API UInterfaceNarrationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInterfaceNarrationLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopNarrationByPriorityExact(UObject* WorldContextObject, EInterfaceNarrationPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static void StopNarration(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetNarrationTemporarilyEnabled(UObject* WorldContextObject, bool bTempState);
    
    UFUNCTION(BlueprintCallable)
    static void NarrateFromWindow(const UWidget* Widget, uint8 Flags);
    
    UFUNCTION(BlueprintCallable)
    static void NarrateFrom(const UNarratableUserWidget* Widget, uint8 Flags, EInterfaceNarrationPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static void NarrateExplicitText(const UWidget* Widget, FText Text, EInterfaceNarrationPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static void NarrateExplicitString(const UWidget* Widget, const FString& String, EInterfaceNarrationPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static void NarrateExplicitChunks(const UWidget* Widget, const TArray<FNarrationChunk>& Chunks, EInterfaceNarrationPriority Priority);
    
    UFUNCTION(BlueprintPure)
    static uint8 MakeNarrationFlags(bool bIgnoreChangeCheck, bool bVerbose);
    
    UFUNCTION(BlueprintCallable)
    static FNarrationChunk AddNarrationChunkString(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, const FString& String, bool bOnlyIfChanged, bool bVerbose);
    
    UFUNCTION(BlueprintCallable)
    static FNarrationChunk AddNarrationChunkLocString(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FLocString String, bool bOnlyIfChanged, bool bVerbose);
    
    UFUNCTION(BlueprintCallable)
    static FNarrationChunk AddNarrationChunk(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FText Text, bool bOnlyIfChanged, bool bVerbose);
    
};

