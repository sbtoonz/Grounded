#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SMInstancerInterface.h"
#include "SMInstancerWidget.generated.h"

class UButton;
class USMInstancingWidgetConfig;

UCLASS(EditInlineNew)
class MAINE_API USMInstancerWidget : public UUserWidget, public ISMInstancerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UButton* InstanceButton;
    
    UPROPERTY(Export)
    UButton* InstanceAllButton;
    
    UPROPERTY(Export)
    UButton* DeinstanceButton;
    
    UPROPERTY(Export)
    UButton* DeinstanceAllButton;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USMInstancingWidgetConfig* Config;
    
public:
    USMInstancerWidget();
    
    // Fix for true pure virtual functions not being implemented
};

