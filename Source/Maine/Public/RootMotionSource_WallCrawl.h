#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionSource_WallCrawl.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRootMotionSource_WallCrawl : public FRootMotionSource {
    GENERATED_BODY()
public:
    FRootMotionSource_WallCrawl();
};

