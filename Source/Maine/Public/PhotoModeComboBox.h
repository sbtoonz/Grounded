#pragma once
#include "CoreMinimal.h"
#include "PhotoModeComboBoxBase.h"
#include "PhotoModeComboBox.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class MAINE_API UPhotoModeComboBox : public UPhotoModeComboBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HoverFocusReceivedSound;
    
public:
    UPhotoModeComboBox();
};

