#pragma once
#include "CoreMinimal.h"
#include "BaseBuildingData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildingFunctionLibrary.generated.h"

class ABuilding;

UCLASS(Blueprintable)
class MAINE_API UBuildingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBuildingDataFilterMatches(const FBaseBuildingData& BuildingData, const FString& FilterText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<ABuilding> CoalesceSoftBuildingClass(TSoftClassPtr<ABuilding> A, TSoftClassPtr<ABuilding> B);
    
};

