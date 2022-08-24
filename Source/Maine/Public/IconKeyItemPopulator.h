#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "IconKeyItemPopulator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UIconKeyItemPopulator : public UGameUserWidget {
    GENERATED_BODY()
public:
    UIconKeyItemPopulator();
};

