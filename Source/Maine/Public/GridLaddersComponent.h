#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CombinedLadderData.h"
#include "BuildingGridBuilding.h"
#include "BuildingGridKey.h"
#include "GridLaddersComponent.generated.h"

class UBuildingGridComponent;
class ALadderBuilding;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UGridLaddersComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FCombinedLadderData> CombinedLadders;
    
    UPROPERTY(Transient)
    TArray<ALadderBuilding*> NeedsRebuild;
    
public:
    UGridLaddersComponent();
protected:
    UFUNCTION()
    void RebuildDirty();
    
    UFUNCTION()
    void RebuildAll();
    
    UFUNCTION()
    void HandleBuildingUnregistered(UBuildingGridComponent* Sender, const FBuildingGridBuilding& Building, const FBuildingGridKey& Slot);
    
    UFUNCTION()
    void HandleBuildingRegistered(UBuildingGridComponent* Sender, const FBuildingGridBuilding& Building, const FBuildingGridKey& Slot);
    
    UFUNCTION()
    void HandleBuildingBuilt(UBuildingGridComponent* Sender, const FBuildingGridBuilding& Building, const FBuildingGridKey& Slot);
    
};

