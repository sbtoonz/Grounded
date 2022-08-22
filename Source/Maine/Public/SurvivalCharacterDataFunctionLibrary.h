#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SurvivalCharacterData.h"
#include "SurvivalCharacterDataFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API USurvivalCharacterDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USurvivalCharacterDataFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool GetCharacterDataFilterMatches(const FSurvivalCharacterData& CharacterData, UPARAM(Ref) FString& FilterText);
    
};

