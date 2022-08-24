#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerVoiceBundle.h"
#include "ConversationBundle.h"
#include "SpeakerBundle.h"
#include "UObject/NoExportTypes.h"
#include "ConversationBundleSet.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationBundleSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConversationBundle> ConversationBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpeakerBundle> SpeakerBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerVoiceBundle> PlayerVoiceBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> PlayerSpeakerIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FString> ConversationNameLookup;
    
public:
    UConversationBundleSet();
};

