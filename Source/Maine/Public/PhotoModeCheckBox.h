#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeCheckBoxBase -FallbackName=PhotoModeCheckBoxBase
#include "PhotoModeCheckBox.generated.h"

class USoundBase;

UCLASS()
class MAINE_API UPhotoModeCheckBox : public UPhotoModeCheckBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* HoverFocusReceivedSound;
    
public:
    UPhotoModeCheckBox();
};

