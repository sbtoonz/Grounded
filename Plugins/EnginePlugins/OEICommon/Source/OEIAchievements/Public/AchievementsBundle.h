#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AchievementEntry.h"
#include "UObject/NoExportTypes.h"
#include "AchievementsBundle.generated.h"

UCLASS(Blueprintable)
class OEIACHIEVEMENTS_API UAchievementsBundle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FAchievementEntry> AchievementValues;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
public:
    UAchievementsBundle();
};

