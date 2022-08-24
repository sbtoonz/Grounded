#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoadingScreenModuleHelper.generated.h"

UCLASS(Blueprintable)
class ULoadingScreenModuleHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULoadingScreenModuleHelper();
private:
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
};

