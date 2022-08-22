#pragma once
#include "CoreMinimal.h"
#include "ECustomPropertyValueFormat.h"
#include "ECustomPropertyInputType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "CustomProperty.generated.h"

USTRUCT(BlueprintType)
struct FCustomProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECustomPropertyInputType InputType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PropertyID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString PropertyName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FLocString> DropdownPropertyNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderMaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderStepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECustomPropertyValueFormat ValueFormat;
    
    MAINE_API FCustomProperty();
};

