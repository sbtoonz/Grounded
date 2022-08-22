#pragma once
#include "CoreMinimal.h"
#include "BaseQuest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=DataTableRowHandle_NetCrc -FallbackName=DataTableRowHandle_NetCrc
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "Quest.generated.h"

class UObjective;
class UBaseObjective;

UCLASS()
class MAINE_API UQuest : public UBaseQuest, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FDataTableRowHandle_NetCrc QuestDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_QuestChanged)
    bool Started;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_QuestChanged)
    bool Completed;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_QuestChanged)
    TArray<UObjective*> Objectives;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_QuestChanged)
    TArray<UBaseObjective*> BaseObjectives;
    
public:
    UQuest();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_QuestChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidForGamePackage();
    
    UFUNCTION(BlueprintPure)
    bool IsTutorialQuest();
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetQuestDataRowHandle();
    
    UFUNCTION(BlueprintPure)
    FString GetObjectiveName(int32 Index);
    
    
    // Fix for true pure virtual functions not being implemented
};

