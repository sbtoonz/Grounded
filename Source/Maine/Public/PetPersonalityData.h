#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "PetPersonalityData.generated.h"

USTRUCT(BlueprintType)
struct FPetPersonalityData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString DisplayName;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    MAINE_API FPetPersonalityData();
};

