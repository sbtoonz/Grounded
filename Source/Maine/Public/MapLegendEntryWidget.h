#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "LocString.h"
#include "OnEntrySelectedDelegate.h"
#include "OnPreviousEntrySelectedDelegate.h"
#include "MapLegendEntryFocusedDelegateDelegate.h"
#include "OnNextEntrySelectedDelegate.h"
#include "EMapEntryType.h"
#include "EPlayerCharacterIdentity.h"
#include "MapLegendEntryWidget.generated.h"

class UBaseMapEntryWidget;
class UImage;
class UTexture2D;
class UTextBlock;
class UButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapLegendEntryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntrySelected OnEntrySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviousEntrySelected OnPreviousEntrySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNextEntrySelected OnNextEntrySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapLegendEntryFocusedDelegate OnEntryFocused;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* PreviousButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* NumberTextElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaWhenHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseMapEntryWidget*> EntryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapEntryType, UTexture2D*> LegendIconMap;
    
public:
    UMapLegendEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityControls(bool Show, bool State);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(UBaseMapEntryWidget* EntryWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconColor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentEntryVisibility();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleCurrentEntryVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSingleElementControls();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowArrowControls(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomPlayerVisuals(EPlayerCharacterIdentity Identity);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshNumberText();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshEntry();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreviousButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnNextButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void GotoPreviousEntry();
    
    UFUNCTION(BlueprintCallable)
    void GotoNextEntry();
    
    UFUNCTION(BlueprintCallable)
    void GotoEntry(UBaseMapEntryWidget* EntryWidget);
    
    UFUNCTION(BlueprintCallable)
    void GotoCurrentEntry();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEntries() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapEntryType GetMapEntryType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UBaseMapEntryWidget*> GetEntryWidgets();
    
};

