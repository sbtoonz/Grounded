#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "GameTextBlock.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGameTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAllUpperCase;
    
public:
    UGameTextBlock();
};

