#pragma once
#include "CoreMinimal.h"
#include "OnDeleteFolderClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeleteFolderClicked, const FString&, FolderName);

