#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationPath -FallbackName=NavigationPath
#include "NavigationPathWithProgress.generated.h"

UCLASS()
class MAINE_API UNavigationPathWithProgress : public UNavigationPath {
    GENERATED_BODY()
public:
    UNavigationPathWithProgress();
};

