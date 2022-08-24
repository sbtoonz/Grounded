#pragma once
#include "CoreMinimal.h"
#include "GoapActionInstance.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GoapActionInstanceFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionInstanceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGoapActionInstanceFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetGoapActionInstanceLocation(const FGoapActionInstance& ActionInstance);
    
};

