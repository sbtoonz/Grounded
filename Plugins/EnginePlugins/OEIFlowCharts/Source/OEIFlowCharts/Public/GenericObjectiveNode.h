#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableConditional.h"
#include "ObjectiveNode.h"
#include "UObject/NoExportTypes.h"
#include "GuidIntPair.h"
#include "GenericObjectiveNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGenericObjectiveNode : public FObjectiveNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveConditionalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional ChildFailedConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> TrackedGlobalVariableIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuidIntPair> TrackedTalkNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> TrackedKillTargetIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> TrackedItemNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> TrackedFactionNames;
    
public:
    FGenericObjectiveNode();
};

