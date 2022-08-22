#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComponentLiteData.generated.h"

UCLASS(Abstract, Const)
class MAINE_API UComponentLiteData : public UObject {
    GENERATED_BODY()
public:
    UComponentLiteData();
};

