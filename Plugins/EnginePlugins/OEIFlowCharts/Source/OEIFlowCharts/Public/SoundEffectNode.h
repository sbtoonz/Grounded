#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "SoundEffectNode.generated.h"

USTRUCT(BlueprintType)
struct FSoundEffectNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
public:
    OEIFLOWCHARTS_API FSoundEffectNode();
};

