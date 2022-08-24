#pragma once
#include "CoreMinimal.h"
#include "ResultFailedNode.h"
#include "ResultFailedFactionChangeNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedFactionChangeNode : public FResultFailedNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FactionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Relationship;
    
public:
    FResultFailedFactionChangeNode();
};

