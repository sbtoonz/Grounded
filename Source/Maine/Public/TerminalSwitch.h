#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Switch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
#include "TerminalConditional.h"
#include "ETerminalWidgetState.h"
#include "TerminalSwitch.generated.h"

class UWidgetComponent;
class AActor;
class UStaticMeshComponent;
class UTerminalWidget;
class UMaterialInterface;
class UConditionalToggleComponent;
class UAudioComponent;
class UBoxComponent;
class UMaterialInstanceDynamic;

UCLASS()
class MAINE_API ATerminalSwitch : public ASwitch {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<TSoftObjectPtr<AActor>> PersistentListeners;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UWidgetComponent* Widget;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTerminalWidget> WidgetClass;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* Audio;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* PlayerBlocker;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* ScreenMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FTerminalConditional> Conditionals;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_CurrentStateIndex)
    int32 CurrentStateIndex;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentWidgetState)
    ETerminalWidgetState CurrentWidgetState;
    
    UPROPERTY(Export, Transient)
    UTerminalWidget* ActiveWidget;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ScreenMID;
    
public:
    ATerminalSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_CurrentWidgetState();
    
    UFUNCTION()
    void OnRep_CurrentStateIndex();
    
public:
    UFUNCTION()
    void OnConditionalStateChanged(UConditionalToggleComponent* Component, bool bEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnConditionalChanged(FName ConditionalStateName, bool bEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanSetGlobalVariables(FName ConditionalStateName, const FGlobalVariableReference& GlobalVariable, int32 DesiredValue);
    
};

