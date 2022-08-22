#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
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

