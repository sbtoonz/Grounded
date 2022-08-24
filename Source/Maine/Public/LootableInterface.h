#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/DataTable.h"
#include "LootableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULootableInterface : public UInterface {
    GENERATED_BODY()
};

class ILootableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckLootConditionals(FDataTableRowHandle ItemDataRowHandle) const;
    
};

