#pragma once
#include "CoreMinimal.h"
#include "OEIEditorBookmarksFolder.h"
#include "OEIEditorBookmarks.generated.h"

USTRUCT(BlueprintType)
struct FOEIEditorBookmarks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIEditorBookmarksFolder> Subfolders;
    
    OEIBOOKMARKS_API FOEIEditorBookmarks();
};

