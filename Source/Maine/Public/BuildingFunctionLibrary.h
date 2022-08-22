#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BaseBuildingData.h"
#include "BuildingFunctionLibrary.generated.h"

class ABuilding;

UCLASS(BlueprintType)
class MAINE_API UBuildingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool GetBuildingDataFilterMatches(const FBaseBuildingData& BuildingData, const FString& FilterText);
    
    UFUNCTION(BlueprintPure)
    static TSoftClassPtr<ABuilding> CoalesceSoftBuildingClass(TSoftClassPtr<ABuilding> A, TSoftClassPtr<ABuilding> B);
    
};

