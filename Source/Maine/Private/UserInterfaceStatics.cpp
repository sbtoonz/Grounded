#include "UserInterfaceStatics.h"

class UScrollBox;
class UWidget;
class UItem;
class UObject;
class UWidgetPlayerProxy;
class UWidgetManager;
class AGameUI;

void UUserInterfaceStatics::ScrollInViewForFocus(UScrollBox* ScrollBox, UWidget* Widget, bool AnimateScroll, float Padding) {
}

void UUserInterfaceStatics::RemoveItemsForCraftingRecipe(FDataTableRowHandle RecipeRowHandle, TArray<UItem*>& HaveItems) {
}

FText UUserInterfaceStatics::MakeTextDirectional(const FText& Text) {
    return FText::GetEmpty();
}

FHotBarQuickSlotItemTypeKey UUserInterfaceStatics::MakeHotBarQuickSlotItemTypeKeyFromItem(UItem* Item) {
    return FHotBarQuickSlotItemTypeKey{};
}

void UUserInterfaceStatics::LogUIMessage(const FString& Message) {
}

bool UUserInterfaceStatics::IsValidLocalizedString(const FLocString& LocString) {
    return false;
}

bool UUserInterfaceStatics::IsKeyItem(FDataTableRowHandle ItemRowHandle) {
    return false;
}

bool UUserInterfaceStatics::HasRequirements(const UObject* WorldContextObject, const TArray<FRecipeRequirements>& Requirements, const TArray<UItem*>& HaveItems) {
    return false;
}

UWidgetPlayerProxy* UUserInterfaceStatics::GetWidgetManagerOwnerProxy(const UObject* WorldContextObject) {
    return NULL;
}

UWidgetManager* UUserInterfaceStatics::GetWidgetManager(const UObject* WorldContextObject) {
    return NULL;
}

UScrollBox* UUserInterfaceStatics::GetParentScrollBox(UWidget* Widget) {
    return NULL;
}

int32 UUserInterfaceStatics::GetMaxCraftable(const UObject* WorldContextObject, FDataTableRowHandle RecipeRowHandle, const TArray<UItem*>& HaveItems) {
    return 0;
}

FString UUserInterfaceStatics::GetLocalizedString(const FLocString& LocString) {
    return TEXT("");
}

int32 UUserInterfaceStatics::GetItemCountForHotBarKey(FHotBarQuickSlotItemTypeKey ItemKey, const TArray<UItem*>& HaveItems, bool IncludeBrokenItems) {
    return 0;
}

int32 UUserInterfaceStatics::GetItemCount(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle, const TArray<UItem*>& HaveItems, bool IncludeBrokenItems) {
    return 0;
}

FLinearColor UUserInterfaceStatics::GetHeatMapColor(const UObject* WorldContextObject, float Alpha) {
    return FLinearColor{};
}

FLinearColor UUserInterfaceStatics::GetGlobalColorLinear(const UObject* WorldContextObject, FName EnumName) {
    return FLinearColor{};
}

AGameUI* UUserInterfaceStatics::GetGameUI(const UObject* WorldContextObject) {
    return NULL;
}

bool UUserInterfaceStatics::GetFilterMatches(const FString& FilterText, const TArray<FString>& Keywords) {
    return false;
}

bool UUserInterfaceStatics::GetCultureFlowIsRTL() {
    return false;
}

FString UUserInterfaceStatics::GetAttackSpeedText(FGameplayTag AttackSpeedTag) {
    return TEXT("");
}

void UUserInterfaceStatics::FindScreenEdgeLocationForWorldLocation(UObject* WorldContextObject, const FVector& InLocation, const float EdgePercent, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen, bool& bFacingBackward) {
}

bool UUserInterfaceStatics::DoesSessionResultOwnerMatchSharedSaveUserId(const FBlueprintSessionResult& Result, const FString& SharedSaveUserID) {
    return false;
}

bool UUserInterfaceStatics::DoesKeyMatchActionMapping(FKey Key, FName ActionMappingName) {
    return false;
}

bool UUserInterfaceStatics::DoesChordMatchActionMapping(const FInputChord& Chord, FName ActionMappingName) {
    return false;
}

bool UUserInterfaceStatics::CanCraftRecipeData(const UObject* WorldContextObject, FRecipeData& RecipeData, const TArray<UItem*>& HaveItems) {
    return false;
}

bool UUserInterfaceStatics::CanCraftRecipe(const UObject* WorldContextObject, FDataTableRowHandle RecipeRowHandle, const TArray<UItem*>& HaveItems) {
    return false;
}

UUserInterfaceStatics::UUserInterfaceStatics() {
}

