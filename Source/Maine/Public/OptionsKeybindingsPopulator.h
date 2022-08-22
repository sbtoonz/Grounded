#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseSettingsWidget.h"
#include "EBindableControlCategory.h"
#include "OptionsKeybindingsPopulator.generated.h"

class ULabeledKeybinding;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UOptionsKeybindingsPopulator : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UVerticalBox* ControlListBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ULabeledKeybinding> ChildClass;
    
    UPROPERTY(EditAnywhere)
    EBindableControlCategory Category;
    
    UPROPERTY(EditAnywhere)
    bool bGamepadControls;
    
    UOptionsKeybindingsPopulator();
};

