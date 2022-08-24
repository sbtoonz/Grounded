#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "SaveLiteDataRegistryCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API USaveLiteDataRegistryCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    USaveLiteDataRegistryCommandlet();
};

