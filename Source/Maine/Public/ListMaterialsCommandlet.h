#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "ListMaterialsCommandlet.generated.h"

UCLASS(NonTransient)
class MAINE_API UListMaterialsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UListMaterialsCommandlet();
};

