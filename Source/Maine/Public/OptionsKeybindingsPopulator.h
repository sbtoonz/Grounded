#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseSettingsWidget.h"
#include "EBindableControlCategory.h"
#include "OptionsKeybindingsPopulator.generated.h"

class UVerticalBox;
class ULabeledKeybinding;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UOptionsKeybindingsPopulator : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* ControlListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULabeledKeybinding> ChildClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBindableControlCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadControls;
    
    UOptionsKeybindingsPopulator();
};

