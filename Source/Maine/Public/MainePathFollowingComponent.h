#pragma once
#include "CoreMinimal.h"
#include "PossessableInterface.h"
#include "Navigation/PathFollowingComponent.h"
#include "MainePathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMainePathFollowingComponent : public UPathFollowingComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
    UMainePathFollowingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

