#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIAchievementSettings.generated.h"

class UAchievementsBundle;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIACHIEVEMENTS_API UOEIAchievementSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAchievementsBundle>> AchievementsBundles;
    
    UOEIAchievementSettings();
};

