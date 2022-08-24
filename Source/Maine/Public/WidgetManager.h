#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnWidgetStackChangedDelegate.h"
#include "Engine/DataTable.h"
#include "WidgetManager.generated.h"

class AActor;
class ASurvivalPlayerCharacter;
class UWindowWidget;
class UWidgetPlayerProxy;
class ASurvivalPlayerController;
class UItem;
class UHaulingComponent;
class UInteractionWidget;

UCLASS(Blueprintable)
class MAINE_API UWidgetManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetStackChanged OnWidgetStackChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWindowWidget*> WindowStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWindowWidget*> WindowCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetPlayerProxy* OwningPlayerProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASurvivalPlayerController* OwningPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void OnUsingGamepadChanged(bool IsUsingGamepad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProximityInvetoriesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInventoryChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHaulingChanged(UHaulingComponent* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEquipmentChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStateReset();
    
    UFUNCTION(BlueprintCallable)
    void HidePauseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWindowWidget* GetTopWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetPlayerProxy* GetOwningPlayerProxy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWindowsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

