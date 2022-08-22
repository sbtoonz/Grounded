#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BuildingManagerBuildingDelegateDelegate.h"
#include "BuildingManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBuildingManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBuildingManagerBuildingDelegate OnBuilingUnderConstruction;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingManagerBuildingDelegate OnBuilingNotUnderConstruction;
    
    UBuildingManagerComponent();
};

