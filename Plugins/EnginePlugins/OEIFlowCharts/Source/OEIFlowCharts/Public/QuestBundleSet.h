#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QuestBundle.h"
#include "QuestBundleSet.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestBundleSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestBundle> QuestBundles;
    
public:
    UQuestBundleSet();
};

