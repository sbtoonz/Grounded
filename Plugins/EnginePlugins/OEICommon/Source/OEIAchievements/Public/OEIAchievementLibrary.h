#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AchievementReference.h"
#include "UObject/NoExportTypes.h"
#include "OEIAchievementLibrary.generated.h"

UCLASS(Blueprintable)
class OEIACHIEVEMENTS_API UOEIAchievementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIAchievementLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementReference MakeAchievementReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetAchievementID(const FAchievementReference& Achievement);
    
};

