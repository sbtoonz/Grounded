#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EFocusRerouterChildIterationStyle.h"
#include "FocusRerouteWidget.generated.h"

class UWidget;

UCLASS(EditInlineNew)
class MAINE_API UFocusRerouteWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UWidget*> ReroutePriorityList;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UWidget*> DisallowFocusFromList;
    
    UPROPERTY(EditAnywhere)
    EFocusRerouterChildIterationStyle ChildInterationStyle;
    
    UFocusRerouteWidget();
};

