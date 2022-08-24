#pragma once
#include "CoreMinimal.h"
#include "IDSet.h"
#include "ChatterVariantSet.generated.h"

USTRUCT(BlueprintType)
struct FChatterVariantSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIDSet> Variants;
    
public:
    OEIFLOWCHARTS_API FChatterVariantSet();
};

