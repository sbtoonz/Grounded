#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "GameUserWidget.h"
#include "HUDDestroyStructureWidget.generated.h"

class UWidgetAnimation;
class UCanvasPanel;
class UGameTextBlock;
class ULocalizedTextBlock;
class UCircularThrobber;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDDestroyStructureWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StructureContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULocalizedTextBlock* FragileText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGameTextBlock* SupportCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCircularThrobber* CountThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UImage* DangerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RecycleWarningStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RecycleWarning;
    
public:
    UHUDDestroyStructureWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeUpdateData();
    
    UFUNCTION(BlueprintCallable)
    void InitSupportTextColors(FSlateColor NormalColor, FSlateColor WarningColor);
    
};

