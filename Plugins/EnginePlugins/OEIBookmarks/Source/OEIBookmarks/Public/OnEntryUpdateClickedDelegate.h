#pragma once
#include "CoreMinimal.h"
#include "OEIEditorBookmark.h"
#include "OnEntryUpdateClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnEntryUpdateClicked, FOEIEditorBookmark&, OriginalInfo, FOEIEditorBookmark&, UpdatedInfo, const FString&, OwningFolderName);

