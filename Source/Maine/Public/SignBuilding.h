#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WidgetBuilding.h"
#include "GameplayTagContainer.h"
#include "SignBuilding.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API ASignBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SignTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSignDataHandle, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SelectedSignDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    ASignBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSignDataHandle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetValidSignData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetSelectedSignData() const;
    
};

