#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "OnEntrySelectedDelegate.h"
#include "OnPreviousEntrySelectedDelegate.h"
#include "MapLegendEntryFocusedDelegateDelegate.h"
#include "OnNextEntrySelectedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EMapEntryType.h"
#include "EPlayerCharacterIdentity.h"
#include "MapLegendEntryWidget.generated.h"

class UBaseMapEntryWidget;
class UImage;
class UButton;
class UTexture2D;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapLegendEntryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnEntrySelected OnEntrySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPreviousEntrySelected OnPreviousEntrySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNextEntrySelected OnNextEntrySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapLegendEntryFocusedDelegate OnEntryFocused;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* PreviousButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* NextButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* Image;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextElement;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* NumberTextElement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString LocString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlphaWhenHidden;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EntryIndex;
    
    UPROPERTY(Export, Transient)
    TArray<UBaseMapEntryWidget*> EntryWidgets;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMapEntryType, UTexture2D*> LegendIconMap;
    
public:
    UMapLegendEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityControls(bool Show, bool State);
    
protected:
    UFUNCTION()
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSingleElementControls();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowArrowControls(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCustomPlayerVisuals(EPlayerCharacterIdentity Identity);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshNumberText();
    
public:
    UFUNCTION()
    void RefreshEntry();
    
protected:
    UFUNCTION()
    void OnPreviousButtonClicked();
    
    UFUNCTION()
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
    UFUNCTION(BlueprintPure)
    int32 GetNumEntries() const;
    
public:
    UFUNCTION(BlueprintPure)
    EMapEntryType GetMapEntryType() const;
    
    UFUNCTION()
    TArray<UBaseMapEntryWidget*> GetEntryWidgets();
    
};

