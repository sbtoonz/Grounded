#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InterfaceNarrationManager.generated.h"

class UInterfaceNarrationConfig;

UCLASS(Blueprintable)
class INTERFACENARRATION_API UInterfaceNarrationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterfaceNarrationConfig* Configuration;
    
public:
    UInterfaceNarrationManager();
private:
    UFUNCTION(BlueprintCallable)
    void LoadingReminderTimerCallback();
    
};

