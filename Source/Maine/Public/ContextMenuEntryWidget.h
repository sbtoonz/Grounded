#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "LocString.h"
#include "ContextMenuEntryWidget.generated.h"

class UButton;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UContextMenuEntryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocString;
    
public:
    UContextMenuEntryWidget();
    UFUNCTION(BlueprintCallable)
    void SetIsValid(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsValid(bool bEnabled);
    
};

