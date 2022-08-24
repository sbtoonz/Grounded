#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "GameplayTagContainer.h"
#include "AIDataProvider_ClimbingTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAIDataProvider_ClimbingTag : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Value;
    
    UAIDataProvider_ClimbingTag();
};

