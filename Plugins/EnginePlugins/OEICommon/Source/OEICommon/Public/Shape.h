#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Shape.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UShape : public UObject {
    GENERATED_BODY()
public:
    UShape();
};

