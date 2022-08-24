#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomProperty.h"
#include "CustomPropertyDataAsset.generated.h"

UCLASS(Blueprintable)
class MAINE_API UCustomPropertyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomProperty> CustomProperties;
    
    UCustomPropertyDataAsset();
};

