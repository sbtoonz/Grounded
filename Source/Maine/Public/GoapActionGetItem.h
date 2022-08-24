#pragma once
#include "CoreMinimal.h"
#include "GoapActionRemoveItem.h"
#include "GoapActionGetItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionGetItem : public UGoapActionRemoveItem {
    GENERATED_BODY()
public:
    UGoapActionGetItem();
};

