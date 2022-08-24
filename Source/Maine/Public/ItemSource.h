#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "ItemSource.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UItemSource : public UInterface {
    GENERATED_BODY()
};

class IItemSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSourceForItem(const FDataTableRowHandle& ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetItemSourceWorldLocation(const FDataTableRowHandle& ItemType) const;
    
};

