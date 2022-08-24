#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OEIWorldRuntime.generated.h"

class UOEIWorldRuntimeSubsystem;
class UOEIWorldRuntime;

UCLASS(Blueprintable, DefaultConfig, DefaultToInstanced, Transient, Config=Game)
class OEICOMMON_API UOEIWorldRuntime : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UOEIWorldRuntimeSubsystem*> Subsystems;
    
public:
    UOEIWorldRuntime();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOEIWorldRuntime* GetOEIWorldRuntime(const UObject* WorldContextObject);
    
};

