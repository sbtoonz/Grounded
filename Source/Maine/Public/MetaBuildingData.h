#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "MetaBuildingData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FMetaBuildingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CategoryTag;
    
private:
    UPROPERTY(Transient)
    TArray<FDataTableRowHandle> SubBuildings;
    
    UPROPERTY(Transient)
    TArray<FDataTableRowHandle> SubBuildingVariants;
    
public:
    FMetaBuildingData();
};

