#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "ListMaterialsCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API UListMaterialsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UListMaterialsCommandlet();
};

