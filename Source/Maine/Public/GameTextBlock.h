#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "GameTextBlock.generated.h"

UCLASS()
class MAINE_API UGameTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool ForceAllUpperCase;
    
public:
    UGameTextBlock();
};

