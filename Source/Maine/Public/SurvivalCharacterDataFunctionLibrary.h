#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SurvivalCharacterData.h"
#include "SurvivalCharacterDataFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API USurvivalCharacterDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USurvivalCharacterDataFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCharacterDataFilterMatches(const FSurvivalCharacterData& CharacterData, UPARAM(Ref) FString& FilterText);
    
};

