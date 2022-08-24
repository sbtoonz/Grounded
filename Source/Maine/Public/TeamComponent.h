#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "LODableComponentInterface.h"
#include "DamageInfo.h"
#include "GenericTeamAgentInterface.h"
#include "TeamComponent.generated.h"

class UBaseLODActor;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTeamComponent : public UActorComponent, public ILODableComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TeamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideReputationOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReputationOnDeath;
    
public:
    UTeamComponent();
    UFUNCTION(BlueprintCallable)
    void RestoreTeam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTeam() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToLODActor(const UBaseLODActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationship(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetDefaultTeamRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCurrentTeamRowHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeam(FDataTableRowHandle NewTeamDataTable);
    
    
    // Fix for true pure virtual functions not being implemented
};

