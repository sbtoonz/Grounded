#pragma once
#include "CoreMinimal.h"
#include "PhotoModeCheckBoxBase.h"
#include "PhotoModeCheckBox.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class MAINE_API UPhotoModeCheckBox : public UPhotoModeCheckBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HoverFocusReceivedSound;
    
public:
    UPhotoModeCheckBox();
};

