#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LabMachineBlueprintableInfo.h"
#include "LabMachineFullBase.generated.h"

class ALabMachineBase;
class UStaticMeshComponent;

UCLASS()
class MAINE_API ALabMachineFullBase : public AActor {
    GENERATED_BODY()
public:
    ALabMachineFullBase();
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMeshesOnReplacementActor(ALabMachineBase* NewActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLabMachineInfo(const FLabMachineBlueprintableInfo& InInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    FLabMachineBlueprintableInfo GetLabMachineInfo();
    
    UFUNCTION(BlueprintImplementableEvent)
    UStaticMeshComponent* GetEmissiveStrip() const;
    
};

