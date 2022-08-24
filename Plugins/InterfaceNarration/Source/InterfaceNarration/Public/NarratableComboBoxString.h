#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "LocString.h"
#include "NarratableComboBoxString.generated.h"

UCLASS(Blueprintable)
class INTERFACENARRATION_API UNarratableComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString ContextString;
    
    UNarratableComboBoxString();
};

