#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "StatusEffectReferenceCategoryData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectReferenceCategoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString CategoryName;
    
    FStatusEffectReferenceCategoryData();
};

