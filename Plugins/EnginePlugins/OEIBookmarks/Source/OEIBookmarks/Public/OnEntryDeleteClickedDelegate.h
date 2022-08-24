#pragma once
#include "CoreMinimal.h"
#include "OEIEditorBookmark.h"
#include "OnEntryDeleteClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEntryDeleteClicked, FOEIEditorBookmark&, BookMark, const FString&, OwningFolderName);

