#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ContextMenuEntryWidget.generated.h"

class UButton;
class UImage;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UContextMenuEntryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* Button;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString LocString;
    
public:
    UContextMenuEntryWidget();
    UFUNCTION(BlueprintCallable)
    void SetIsValid(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetIsValid(bool bEnabled);
    
};

