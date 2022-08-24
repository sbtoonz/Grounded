#pragma once
#include "CoreMinimal.h"
#include "OnAddToFolderClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAddToFolderClicked, const FString&, Folder);

