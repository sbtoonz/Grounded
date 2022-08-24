#pragma once
#include "CoreMinimal.h"
#include "GoapActionRemoveItem.h"
#include "GoapActionDumpItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionDumpItem : public UGoapActionRemoveItem {
    GENERATED_BODY()
public:
    UGoapActionDumpItem();
};

