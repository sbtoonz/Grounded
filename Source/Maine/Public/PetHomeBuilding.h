#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "BuildingPetChangedDelegateDelegate.h"
#include "PetHomeBuilding.generated.h"

class UBaseLODActor;
class UCreatureLODActor;
class ASurvivalCreature;
class UTamedCreatureData;

UCLASS(Abstract, Blueprintable)
class MAINE_API APetHomeBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingPetChangedDelegate OnStoredPetChanged;
    
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UCreatureLODActor> StoredPet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoredPetFull, meta=(AllowPrivateAccess=true))
    ASurvivalCreature* StoredPetFull;
    
public:
    APetHomeBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredPetFull();
    
    UFUNCTION(BlueprintCallable)
    void HandleStoredPetLODActorConvertedToProxyActor(UBaseLODActor* LODActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleStoredPetLODActorConvertedToFullActor(UBaseLODActor* LODActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTamedCreatureData* GetStoredTameData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalCreature* GetStoredPetFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCreatureLODActor* GetStoredPet() const;
    
};

