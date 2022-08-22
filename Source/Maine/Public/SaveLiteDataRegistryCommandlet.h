#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "SaveLiteDataRegistryCommandlet.generated.h"

UCLASS(NonTransient)
class MAINE_API USaveLiteDataRegistryCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    USaveLiteDataRegistryCommandlet();
};

