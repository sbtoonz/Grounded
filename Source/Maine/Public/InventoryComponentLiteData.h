#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "InventoryComponentLiteData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UInventoryComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MaxSize;
    
    UInventoryComponentLiteData();
};

