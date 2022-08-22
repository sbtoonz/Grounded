#pragma once
#include "CoreMinimal.h"
#include "GameTextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "LocalizedTextBlock.generated.h"

UCLASS()
class MAINE_API ULocalizedTextBlock : public UGameTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLocString LocalizedString;
    
    ULocalizedTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetLocalizedString(FLocString LocString);
    
};

