#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Framework/Commands/InputChord.h"
#include "NarrationChunk.h"
#include "GameInterfaceNarrationLibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class MAINE_API UGameInterfaceNarrationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameInterfaceNarrationLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputChord GetFirstChordHelper(FName ActionName, bool bAxisPositive, bool bUsingGamepad);
    
    UFUNCTION(BlueprintCallable)
    static void AddDoubleControlChunk(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FName ActionName1, bool bAxisPositive1, FName ActionName2, bool bAxisPositive2, const FString& ActionDisplayName, bool bOnlyIfChanged, bool bVerbose);
    
    UFUNCTION(BlueprintCallable)
    static void AddControlChunk(UPARAM(Ref) TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FName ActionName, bool bAxisPositive, const FString& ActionDisplayName, bool bOnlyIfChanged, bool bVerbose, bool bIsHold);
    
};

