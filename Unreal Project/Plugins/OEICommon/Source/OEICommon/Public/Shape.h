#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Shape.generated.h"

UCLASS(Abstract, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UShape : public UObject {
    GENERATED_BODY()
public:
    UShape();
};

