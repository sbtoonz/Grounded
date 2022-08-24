#pragma once
#include "CoreMinimal.h"
#include "OnFolderOpenCloseClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFolderOpenCloseClicked, const FString&, FolderName, bool, bIsOpen);

