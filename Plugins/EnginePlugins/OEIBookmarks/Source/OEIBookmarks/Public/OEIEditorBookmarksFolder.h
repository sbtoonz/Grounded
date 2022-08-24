#pragma once
#include "CoreMinimal.h"
#include "OEIEditorBookmark.h"
#include "OEIEditorBookmarksFolder.generated.h"

USTRUCT(BlueprintType)
struct FOEIEditorBookmarksFolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIEditorBookmark> Bookmarks;
    
    OEIBOOKMARKS_API FOEIEditorBookmarksFolder();
};

