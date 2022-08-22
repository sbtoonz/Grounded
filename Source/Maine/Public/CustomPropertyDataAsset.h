#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CustomProperty.h"
#include "CustomPropertyDataAsset.generated.h"

UCLASS(BlueprintType)
class MAINE_API UCustomPropertyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCustomProperty> CustomProperties;
    
    UCustomPropertyDataAsset();
};

