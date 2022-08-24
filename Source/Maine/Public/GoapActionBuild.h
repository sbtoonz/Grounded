#pragma once
#include "CoreMinimal.h"
#include "GoapActionUseHeldItem.h"
#include "GoapActionBuild.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionBuild : public UGoapActionUseHeldItem {
    GENERATED_BODY()
public:
    UGoapActionBuild();
};

