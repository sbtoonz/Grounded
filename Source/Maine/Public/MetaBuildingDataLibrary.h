#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "MetaBuildingData.h"
#include "MetaBuildingIdentifier.h"
#include "MetaBuildingDataLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class MAINE_API UMetaBuildingDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMetaBuildingDataLibrary();
    UFUNCTION(BlueprintPure)
    static int32 GetMetaBuildingUnlockedSubBuildingNum(const UObject* WorldContextObject, const FDataTableRowHandle& MetaBuilding);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetMetaBuildingUiSubBuilding(const UObject* WorldContextObject, const FMetaBuildingData& Data, const TArray<FDataTableRowHandle>& Variants);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMetaBuildingSubBuildingIndex(const UObject* WorldContextObject, const FMetaBuildingIdentifier& Identifier);
    
    UFUNCTION(BlueprintPure)
    static bool GetMetaBuildingHasMultipleUnlockedSubBuildings(const UObject* WorldContextObject, const FDataTableRowHandle& MetaBuilding);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMetaBuildingCurrentSubBuildingIndex(const UObject* WorldContextObject, const FDataTableRowHandle& MetabuildingRow);
    
    UFUNCTION(BlueprintPure)
    static int32 FindInMetaBuildings(const TArray<FDataTableRowHandle>& MetaBuildings, const FDataTableRowHandle& Needle);
    
};

