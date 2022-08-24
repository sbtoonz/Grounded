#pragma once
#include "CoreMinimal.h"
#include "BuildingManagerBuildingDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "BuildingManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBuildingManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingManagerBuildingDelegate OnBuilingUnderConstruction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingManagerBuildingDelegate OnBuilingNotUnderConstruction;
    
    UBuildingManagerComponent();
};

