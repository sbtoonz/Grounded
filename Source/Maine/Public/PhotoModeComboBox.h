#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeComboBoxBase -FallbackName=PhotoModeComboBoxBase
#include "PhotoModeComboBox.generated.h"

class USoundBase;

UCLASS()
class MAINE_API UPhotoModeComboBox : public UPhotoModeComboBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* HoverFocusReceivedSound;
    
public:
    UPhotoModeComboBox();
};

