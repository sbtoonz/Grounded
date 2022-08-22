#pragma once
#include "CoreMinimal.h"
#include "HotBarQuickSlotItemTypeKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RecipeRequirements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RecipeData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "UserInterfaceStatics.generated.h"

class UScrollBox;
class UWidget;
class UItem;
class UObject;
class UWidgetPlayerProxy;
class UWidgetManager;
class AGameUI;

UCLASS(BlueprintType)
class MAINE_API UUserInterfaceStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserInterfaceStatics();
    UFUNCTION(BlueprintCallable)
    static void ScrollInViewForFocus(UScrollBox* ScrollBox, UWidget* Widget, bool AnimateScroll, float Padding);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveItemsForCraftingRecipe(FDataTableRowHandle RecipeRowHandle, UPARAM(Ref) TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintPure)
    static FText MakeTextDirectional(const FText& Text);
    
    UFUNCTION(BlueprintPure)
    static FHotBarQuickSlotItemTypeKey MakeHotBarQuickSlotItemTypeKeyFromItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    static void LogUIMessage(const FString& Message);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidLocalizedString(const FLocString& LocString);
    
    UFUNCTION(BlueprintPure)
    static bool IsKeyItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static bool HasRequirements(const UObject* WorldContextObject, const TArray<FRecipeRequirements>& Requirements, const TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintPure)
    static UWidgetPlayerProxy* GetWidgetManagerOwnerProxy(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UWidgetManager* GetWidgetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UScrollBox* GetParentScrollBox(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMaxCraftable(const UObject* WorldContextObject, FDataTableRowHandle RecipeRowHandle, const TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintPure)
    static FString GetLocalizedString(const FLocString& LocString);
    
    UFUNCTION(BlueprintPure)
    static int32 GetItemCountForHotBarKey(FHotBarQuickSlotItemTypeKey ItemKey, const TArray<UItem*>& HaveItems, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintPure)
    static int32 GetItemCount(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle, const TArray<UItem*>& HaveItems, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor GetHeatMapColor(const UObject* WorldContextObject, float Alpha);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor GetGlobalColorLinear(const UObject* WorldContextObject, FName EnumName);
    
    UFUNCTION(BlueprintPure)
    static AGameUI* GetGameUI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetFilterMatches(const FString& FilterText, const TArray<FString>& Keywords);
    
    UFUNCTION(BlueprintPure)
    static bool GetCultureFlowIsRTL();
    
    UFUNCTION(BlueprintPure)
    static FString GetAttackSpeedText(FGameplayTag AttackSpeedTag);
    
    UFUNCTION(BlueprintPure)
    static void FindScreenEdgeLocationForWorldLocation(UObject* WorldContextObject, const FVector& InLocation, const float EdgePercent, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen, bool& bFacingBackward);
    
    UFUNCTION(BlueprintPure)
    static bool DoesSessionResultOwnerMatchSharedSaveUserId(const FBlueprintSessionResult& Result, const FString& SharedSaveUserID);
    
    UFUNCTION(BlueprintPure)
    static bool DoesKeyMatchActionMapping(FKey Key, FName ActionMappingName);
    
    UFUNCTION(BlueprintPure)
    static bool DoesChordMatchActionMapping(const FInputChord& Chord, FName ActionMappingName);
    
    UFUNCTION(BlueprintPure)
    static bool CanCraftRecipeData(const UObject* WorldContextObject, FRecipeData& RecipeData, const TArray<UItem*>& HaveItems);
    
    UFUNCTION(BlueprintPure)
    static bool CanCraftRecipe(const UObject* WorldContextObject, FDataTableRowHandle RecipeRowHandle, const TArray<UItem*>& HaveItems);
    
};

