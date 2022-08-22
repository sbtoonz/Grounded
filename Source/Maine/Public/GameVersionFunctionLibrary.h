#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GameVersion.h"
#include "GameVersionFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UGameVersionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameVersionFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FString GetGameVersionString();
    
    UFUNCTION(BlueprintPure)
    static FGameVersion GetGameVersion();
    
};

