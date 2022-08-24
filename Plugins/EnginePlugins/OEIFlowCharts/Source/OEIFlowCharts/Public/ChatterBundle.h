#pragma once
#include "CoreMinimal.h"
#include "FlowChartBundle.h"
#include "ChatterLink.h"
#include "ChatterEventNode.h"
#include "ChatterNode.h"
#include "TalkNode.h"
#include "SoundEffectNode.h"
#include "ScriptNode.h"
#include "ChatterBundle.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FChatterBundle : public FFlowChartBundle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> AudioLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StringTableFilenames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatterLink> ChatterLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatterEventNode> ChatterEventNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatterNode> ChatterNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundEffectNode> SoundEffectNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptNode> ScriptNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkNode> TalkNodes;
    
public:
    FChatterBundle();
};

