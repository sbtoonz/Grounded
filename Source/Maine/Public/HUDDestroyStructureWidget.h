#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "HUDDestroyStructureWidget.generated.h"

class UWidgetAnimation;
class UCanvasPanel;
class ULocalizedTextBlock;
class UGameTextBlock;
class UCircularThrobber;
class UImage;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDDestroyStructureWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UCanvasPanel* StructureContainer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULocalizedTextBlock* FragileText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGameTextBlock* SupportCount;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UCircularThrobber* CountThrobber;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* DangerIcon;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* RecycleWarningStop;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* RecycleWarning;
    
public:
    UHUDDestroyStructureWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeUpdateData();
    
    UFUNCTION(BlueprintCallable)
    void InitSupportTextColors(FSlateColor NormalColor, FSlateColor WarningColor);
    
};

