#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "InventoryComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UInventoryComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSize;
    
    UInventoryComponentLiteData();
};

