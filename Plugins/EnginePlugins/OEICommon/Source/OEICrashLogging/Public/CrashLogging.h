#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CrashLogging.generated.h"

UCLASS(Blueprintable)
class OEICRASHLOGGING_API UCrashLogging : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCrashLogging();
};

