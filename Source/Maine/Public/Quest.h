#pragma once
#include "CoreMinimal.h"
#include "DataTableRowHandle_NetCrc.h"
#include "BaseQuest.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "Quest.generated.h"

class UBaseObjective;
class UObjective;

UCLASS(Blueprintable)
class MAINE_API UQuest : public UBaseQuest, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle_NetCrc QuestDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestChanged, meta=(AllowPrivateAccess=true))
    bool Started;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestChanged, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestChanged, meta=(AllowPrivateAccess=true))
    TArray<UObjective*> Objectives;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestChanged, meta=(AllowPrivateAccess=true))
    TArray<UBaseObjective*> BaseObjectives;
    
public:
    UQuest();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidForGamePackage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetQuestDataRowHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetObjectiveName(int32 Index);
    
    
    // Fix for true pure virtual functions not being implemented
};

