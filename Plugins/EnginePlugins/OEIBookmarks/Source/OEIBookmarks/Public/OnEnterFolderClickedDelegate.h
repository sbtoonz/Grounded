#pragma once
#include "CoreMinimal.h"
#include "OnEnterFolderClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEnterFolderClicked, const FString&, FolderName);

