#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "SignBuilding.generated.h"

UCLASS(Abstract)
class MAINE_API ASignBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag SignTag;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentSignDataHandle)
    FDataTableRowHandle SelectedSignDataHandle;
    
    UPROPERTY(EditDefaultsOnly)
    FName MeshName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaterialIndex;
    
public:
    ASignBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_CurrentSignDataHandle();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetValidSignData() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetSelectedSignData() const;
    
};

