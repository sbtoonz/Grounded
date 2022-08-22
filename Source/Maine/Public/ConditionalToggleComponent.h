#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnConditionalStateChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionEnabled -FallbackName=ECollisionEnabled
#include "OnConditionalStateChangedExDelegate.h"
#include "GlobalVariableReferenceConditional.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ELogicalOperator -FallbackName=ELogicalOperator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConditionalToggleComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UConditionalToggleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnConditionalStateChanged OnConditionalStateChanged;
    
    UPROPERTY()
    FOnConditionalStateChangedEx OnConditionalStateChangedEx;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Enabled)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 StartHour;
    
    UPROPERTY(EditAnywhere)
    int32 EndHour;
    
    UPROPERTY(EditAnywhere)
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(EditAnywhere)
    ELogicalOperator ConditionalLogic;
    
    UPROPERTY(EditAnywhere)
    bool bToggleVisibility;
    
    UPROPERTY(EditAnywhere)
    bool bToggleCollision;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> DefaultCollisionType;
    
public:
    UConditionalToggleComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_Enabled();
    
    UFUNCTION()
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
    UFUNCTION()
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

