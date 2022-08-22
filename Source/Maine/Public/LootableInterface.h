#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
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

