#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AchievementReference.generated.h"

USTRUCT(BlueprintType)
struct OEIACHIEVEMENTS_API FAchievementReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
public:
    FAchievementReference();
};

