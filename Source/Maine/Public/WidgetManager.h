#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnWidgetStackChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "WidgetManager.generated.h"

class ASurvivalPlayerController;
class AActor;
class ASurvivalPlayerCharacter;
class UWindowWidget;
class UWidgetPlayerProxy;
class UItem;
class UHaulingComponent;
class UInteractionWidget;

UCLASS(Blueprintable)
class MAINE_API UWidgetManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnWidgetStackChanged OnWidgetStackChanged;
    
protected:
    UPROPERTY(Export, Transient)
    TArray<UWindowWidget*> WindowStack;
    
    UPROPERTY(Export, Transient)
    TArray<UWindowWidget*> WindowCache;
    
    UPROPERTY(Transient)
    UWidgetPlayerProxy* OwningPlayerProxy;
    
    UPROPERTY(Transient)
    ASurvivalPlayerController* OwningPlayerController;
    
    UPROPERTY(Transient)
    ASurvivalPlayerCharacter* OwningPlayerCharacter;
    
public:
    UWidgetManager();
    UFUNCTION(BlueprintCallable)
    void TryCloseInteractableWidget(AActor* InteractableActor);
    
    UFUNCTION(BlueprintCallable)
    void TogglePauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void SwapItemSlots(UItem* Item1, int32 Index1, UItem* Item2, int32 Index2);
    
    UFUNCTION(BlueprintCallable)
    void ShowPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetPauseMenuActive(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveProxyItemsForRecipe(FDataTableRowHandle RecipeRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveProxyItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ProxyUnequipItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void ProxyEquipItem(UItem* Item);
    
    UFUNCTION()
    void OnUsingGamepadChanged(bool IsUsingGamepad);
    
protected:
    UFUNCTION()
    void OnPlayerProximityInvetoriesChanged();
    
    UFUNCTION()
    void OnPlayerInventoryChanged();
    
    UFUNCTION()
    void OnPlayerHaulingChanged(UHaulingComponent* Sender);
    
    UFUNCTION()
    void OnPlayerEquipmentChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameStateReset();
    
    UFUNCTION(BlueprintCallable)
    void HidePauseMenu();
    
    UFUNCTION(BlueprintPure)
    UWindowWidget* GetTopWindow() const;
    
    UFUNCTION(BlueprintPure)
    UWidgetPlayerProxy* GetOwningPlayerProxy();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumWindowsOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHideHUD() const;
    
    UFUNCTION(BlueprintCallable)
    UWindowWidget* GetActiveWindowOfType(TSoftClassPtr<UWindowWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void DefragProxyInventory(bool SingleItem);
    
    UFUNCTION(BlueprintCallable)
    UWindowWidget* CreateWindowWidget(TSoftClassPtr<UWindowWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    UInteractionWidget* CreateInteractionWidget(AActor* Interactable, TSoftClassPtr<UInteractionWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateControllerDisconnectedWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseWindowOfType(TSoftClassPtr<UWindowWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow(UWindowWidget* Window);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllWindowWidgets();
    
    UFUNCTION(BlueprintCallable)
    void CloseActiveWindowWidget();
    
};

