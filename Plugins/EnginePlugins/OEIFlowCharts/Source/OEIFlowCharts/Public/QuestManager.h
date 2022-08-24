#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestManager.generated.h"

class UQuestBundleSet;

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UQuestBundleSet*> OverrideBundleSets;
    
public:
    UQuestManager();
};

