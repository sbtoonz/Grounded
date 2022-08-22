#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RootMotionSource -FallbackName=RootMotionSource
#include "RootMotionSource_WallCrawl.generated.h"

USTRUCT()
struct MAINE_API FRootMotionSource_WallCrawl : public FRootMotionSource {
    GENERATED_BODY()
public:
    FRootMotionSource_WallCrawl();
};

