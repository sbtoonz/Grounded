#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=DataTableRowHandle_NetCrc -FallbackName=DataTableRowHandle_NetCrc
#include "PersistentInterface.h"
#include "BaseObjective.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EGameInputType.h"
#include "Objective.generated.h"

UCLASS()
class MAINE_API UObjective : public UBaseObjective, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FDataTableRowHandle_NetCrc QuestDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 ObjectiveIndex;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ObjectiveChanged)
    uint8 bActive: 1;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ObjectiveChanged)
    uint8 bCompleted: 1;
    
    UObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ObjectiveChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidForGamePackage();
    
    UFUNCTION(BlueprintPure)
    bool IsTutorialObjective();
    
    UFUNCTION(BlueprintPure)
    bool IsCritPathObjective();
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetQuestDataRowHandle();
    
    UFUNCTION(BlueprintPure)
    FName GetObjectiveControl(EGameInputType InputType);
    
    
    // Fix for true pure virtual functions not being implemented
};

