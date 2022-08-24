#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "LocString.h"
#include "PhotoModeTextBlock.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAllUpperCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UPhotoModeTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetLocalizedString(FLocString LocString);
    
};

