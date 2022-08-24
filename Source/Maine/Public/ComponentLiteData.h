#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComponentLiteData.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class MAINE_API UComponentLiteData : public UObject {
    GENERATED_BODY()
public:
    UComponentLiteData();
};

