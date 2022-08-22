#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "SMInstancerInterface.h"
#include "SMInstancerCommandlet.generated.h"

UCLASS(NonTransient)
class MAINE_API USMInstancerCommandlet : public UCommandlet, public ISMInstancerInterface {
    GENERATED_BODY()
public:
    USMInstancerCommandlet();
    
    // Fix for true pure virtual functions not being implemented
};

