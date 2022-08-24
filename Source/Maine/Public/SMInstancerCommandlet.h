#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "SMInstancerInterface.h"
#include "SMInstancerCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API USMInstancerCommandlet : public UCommandlet, public ISMInstancerInterface {
    GENERATED_BODY()
public:
    USMInstancerCommandlet();
    
    // Fix for true pure virtual functions not being implemented
};

