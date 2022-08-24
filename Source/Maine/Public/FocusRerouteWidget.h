#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EFocusRerouterChildIterationStyle.h"
#include "FocusRerouteWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UFocusRerouteWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ReroutePriorityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> DisallowFocusFromList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusRerouterChildIterationStyle ChildInterationStyle;
    
    UFocusRerouteWidget();
};

