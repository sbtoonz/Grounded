#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameVersion.h"
#include "GameVersionFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGameVersionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameVersionFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameVersionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameVersion GetGameVersion();
    
};

