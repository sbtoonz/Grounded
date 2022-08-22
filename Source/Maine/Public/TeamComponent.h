#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LODableComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
#include "DamageInfo.h"
#include "TeamComponent.generated.h"

class AActor;
class UBaseLODActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTeamComponent : public UActorComponent, public ILODableComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TeamDataTable;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideReputationOnDeath;
    
    UPROPERTY(EditAnywhere)
    int32 ReputationOnDeath;
    
public:
    UTeamComponent();
    UFUNCTION(BlueprintCallable)
    void RestoreTeam();
    
protected:
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasTeam() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToLODActor(const UBaseLODActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationship(const AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetDefaultTeamRowHandle() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetCurrentTeamRowHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeam(FDataTableRowHandle NewTeamDataTable);
    
    
    // Fix for true pure virtual functions not being implemented
};

