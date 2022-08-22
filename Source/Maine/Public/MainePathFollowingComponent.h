#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
#include "PossessableInterface.h"
#include "MainePathFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMainePathFollowingComponent : public UPathFollowingComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
    UMainePathFollowingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

