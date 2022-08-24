#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "MetaBuildingData.h"
#include "MetaBuildingIdentifier.h"
#include "MetaBuildingDataLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAINE_API UMetaBuildingDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMetaBuildingDataLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMetaBuildingUnlockedSubBuildingNum(const UObject* WorldContextObject, const FDataTableRowHandle& MetaBuilding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetMetaBuildingUiSubBuilding(const UObject* WorldContextObject, const FMetaBuildingData& Data, const TArray<FDataTableRowHandle>& Variants);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMetaBuildingSubBuildingIndex(const UObject* WorldContextObject, const FMetaBuildingIdentifier& Identifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMetaBuildingHasMultipleUnlockedSubBuildings(const UObject* WorldContextObject, const FDataTableRowHandle& MetaBuilding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMetaBuildingCurrentSubBuildingIndex(const UObject* WorldContextObject, const FDataTableRowHandle& MetabuildingRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindInMetaBuildings(const TArray<FDataTableRowHandle>& MetaBuildings, const FDataTableRowHandle& Needle);
    
};

