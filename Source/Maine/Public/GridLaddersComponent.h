#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuildingGridBuilding.h"
#include "CombinedLadderData.h"
#include "BuildingGridKey.h"
#include "GridLaddersComponent.generated.h"

class UBuildingGridComponent;
class ALadderBuilding;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UGridLaddersComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCombinedLadderData> CombinedLadders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALadderBuilding*> NeedsRebuild;
    
public:
    UGridLaddersComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void RebuildDirty();
    
    UFUNCTION(BlueprintCallable)
    void RebuildAll();
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingUnregistered(UBuildingGridComponent* Sender, const FBuildingGridBuilding& Building, const FBuildingGridKey& Slot);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingRegistered(UBuildingGridComponent* Sender, const FBuildingGridBuilding& Building, const FBuildingGridKey& Slot);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingBuilt(UBuildingGridComponent* Sender, const FBuildingGridBuilding& Building, const FBuildingGridKey& Slot);
    
};

