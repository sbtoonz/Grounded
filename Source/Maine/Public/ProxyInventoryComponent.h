#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "Engine/DataTable.h"
#include "ItemContainerInterface.h"
#include "ProxyInventoryComponent.generated.h"

class UItem;

UCLASS(Blueprintable)
class MAINE_API UProxyInventoryComponent : public UProxyComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSize;
    
    UProxyInventoryComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* FindPartialItemStackForItemHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* FindPartialItemStackForItem(UItem* Item) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

