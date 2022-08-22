#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LabMachineBase.h"
#include "LabMachineA.generated.h"

class UStaticMeshComponent;

UCLASS()
class MAINE_API ALabMachineA : public ALabMachineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* MonitorA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* CabinetA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* ConsolePlate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* ConsoleButtons;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Panel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* PanelDoodads;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* EmissiveStrip;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Table;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor EmissiveStripColor;
    
    ALabMachineA();
};

