#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIGlobalVariableSettings.generated.h"

class UGlobalVariableBundle;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIGLOBALVARIABLES_API UOEIGlobalVariableSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGlobalVariableBundle>> GlobalVariableBundles;
    
    UOEIGlobalVariableSettings();
};

