#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InterfaceNarration -ObjectName=NarrationChunk -FallbackName=NarrationChunk
#include "GameInterfaceNarrationLibrary.generated.h"

class UWidget;

UCLASS(BlueprintType)
class MAINE_API UGameInterfaceNarrationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameInterfaceNarrationLibrary();
    UFUNCTION(BlueprintPure)
    static FInputChord GetFirstChordHelper(FName ActionName, bool bAxisPositive, bool bUsingGamepad);
    
    UFUNCTION(BlueprintCallable)
    static void AddDoubleControlChunk(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FName ActionName1, bool bAxisPositive1, FName ActionName2, bool bAxisPositive2, const FString& ActionDisplayName, bool bOnlyIfChanged, bool bVerbose);
    
    UFUNCTION(BlueprintCallable)
    static void AddControlChunk(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FName ActionName, bool bAxisPositive, const FString& ActionDisplayName, bool bOnlyIfChanged, bool bVerbose, bool bIsHold);
    
};

