#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LabMachineBlueprintableInfo.h"
#include "LabMachineFullBase.generated.h"

class ALabMachineBase;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAINE_API ALabMachineFullBase : public AActor {
    GENERATED_BODY()
public:
    ALabMachineFullBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMeshesOnReplacementActor(ALabMachineBase* NewActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLabMachineInfo(const FLabMachineBlueprintableInfo& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLabMachineBlueprintableInfo GetLabMachineInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* GetEmissiveStrip() const;
    
};

