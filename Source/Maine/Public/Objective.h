#pragma once
#include "CoreMinimal.h"
#include "PersistentInterface.h"
#include "BaseObjective.h"
#include "DataTableRowHandle_NetCrc.h"
#include "Engine/DataTable.h"
#include "EGameInputType.h"
#include "Objective.generated.h"

UCLASS(Blueprintable)
class MAINE_API UObjective : public UBaseObjective, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle_NetCrc QuestDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ObjectiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveChanged, meta=(AllowPrivateAccess=true))
    uint8 bActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveChanged, meta=(AllowPrivateAccess=true))
    uint8 bCompleted: 1;
    
    UObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidForGamePackage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCritPathObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetQuestDataRowHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetObjectiveControl(EGameInputType InputType);
    
    
    // Fix for true pure virtual functions not being implemented
};

