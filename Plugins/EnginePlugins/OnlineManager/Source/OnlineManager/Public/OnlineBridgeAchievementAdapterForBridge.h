#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBridgeAchievementAdapter.h"
#include "OnlineBridgeAchievementAdapterForBridge.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBridgeAchievementAdapterForBridge : public UObject, public IOnlineBridgeAchievementAdapter {
    GENERATED_BODY()
public:
    UOnlineBridgeAchievementAdapterForBridge();
    
    // Fix for true pure virtual functions not being implemented
};

