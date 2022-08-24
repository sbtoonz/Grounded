#include "GoapActionUseHeldItem.h"

class UItem;

bool UGoapActionUseHeldItem::IsUsableData(FDataTableRowHandle ItemDataHandle, const FGoapActionOwner& Owner) {
    return false;
}

bool UGoapActionUseHeldItem::IsUsable(const UItem* Item, const FGoapActionOwner& Owner) {
    return false;
}

UGoapActionUseHeldItem::UGoapActionUseHeldItem() {
}

