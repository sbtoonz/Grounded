#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PersistentUtilsStatics.generated.h"

class USaveWriter;
class USaveReader;

UCLASS(Blueprintable)
class MAINE_API UPersistentUtilsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPersistentUtilsStatics();
    UFUNCTION(BlueprintCallable)
    static void BlueprintWritePersistentInt(USaveWriter* Writer, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintWritePersistentBool(USaveWriter* Writer, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 BlueprintReadPersistentInt(USaveReader* Reader);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintReadPersistentBool(USaveReader* Reader);
    
};

