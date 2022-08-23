#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEIWorldRuntime.generated.h"

class UOEIWorldRuntimeSubsystem;
class UOEIWorldRuntime;

UCLASS(BlueprintType, DefaultConfig, DefaultToInstanced, Transient, Config=Game)
class OEICOMMON_API UOEIWorldRuntime : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, UOEIWorldRuntimeSubsystem*> Subsystems;
    
public:
    UOEIWorldRuntime();
    UFUNCTION(BlueprintPure)
    static UOEIWorldRuntime* GetOEIWorldRuntime(const UObject* WorldContextObject);
    
};

