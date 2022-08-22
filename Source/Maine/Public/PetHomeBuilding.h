#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "BuildingPetChangedDelegateDelegate.h"
#include "PetHomeBuilding.generated.h"

class UBaseLODActor;
class ASurvivalCreature;
class UCreatureLODActor;
class UTamedCreatureData;

UCLASS(Abstract)
class MAINE_API APetHomeBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBuildingPetChangedDelegate OnStoredPetChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UCreatureLODActor> StoredPet;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StoredPetFull)
    ASurvivalCreature* StoredPetFull;
    
public:
    APetHomeBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_StoredPetFull();
    
    UFUNCTION()
    void HandleStoredPetLODActorConvertedToProxyActor(UBaseLODActor* LODActor);
    
    UFUNCTION()
    void HandleStoredPetLODActorConvertedToFullActor(UBaseLODActor* LODActor);
    
public:
    UFUNCTION(BlueprintPure)
    UTamedCreatureData* GetStoredTameData() const;
    
    UFUNCTION(BlueprintPure)
    ASurvivalCreature* GetStoredPetFull() const;
    
    UFUNCTION(BlueprintPure)
    UCreatureLODActor* GetStoredPet() const;
    
};

