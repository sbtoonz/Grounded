#pragma once
#include "CoreMinimal.h"
#include "OnRenameFolderClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRenameFolderClicked, const FString&, OriginalFolderName, const FString&, NewFolderName);

