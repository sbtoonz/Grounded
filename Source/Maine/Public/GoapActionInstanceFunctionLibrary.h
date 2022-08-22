#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GoapActionInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GoapActionInstanceFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UGoapActionInstanceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGoapActionInstanceFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FVector GetGoapActionInstanceLocation(const FGoapActionInstance& ActionInstance);
    
};

