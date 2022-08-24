#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OEISubtitleEntry.h"
#include "OEISubtitleData.generated.h"

UCLASS(Blueprintable)
class OEIMOVIEPLAYER_API UOEISubtitleData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConversationFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEISubtitleEntry> SubtitleEntries;
    
public:
    UOEISubtitleData();
};

