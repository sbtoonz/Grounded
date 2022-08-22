#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LabMachineInfoBase.h"
#include "LabMachineBlueprintableInfo.h"
#include "LabMachineBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class MAINE_API ALabMachineBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* BaseCabinet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group1Cabinet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group1Trim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group1Doodads;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group2Cabinet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group2Trim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group2Doodads;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group3Cabinet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group3Trim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* Group3Doodads;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* CabinetDoor;
    
protected:
    UPROPERTY(EditAnywhere)
    FLabMachineInfoBase LabMachineInfo;
    
public:
    ALabMachineBase();
    UFUNCTION(BlueprintPure)
    FLabMachineBlueprintableInfo GetInfo() const;
    
};

