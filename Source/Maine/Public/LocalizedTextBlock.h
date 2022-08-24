#pragma once
#include "CoreMinimal.h"
#include "GameTextBlock.h"
#include "LocString.h"
#include "LocalizedTextBlock.generated.h"

UCLASS(Blueprintable)
class MAINE_API ULocalizedTextBlock : public UGameTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedString;
    
    ULocalizedTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetLocalizedString(FLocString LocString);
    
};

