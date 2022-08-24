#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProvider_FleeRange.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAIDataProvider_FleeRange : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    UAIDataProvider_FleeRange();
};

