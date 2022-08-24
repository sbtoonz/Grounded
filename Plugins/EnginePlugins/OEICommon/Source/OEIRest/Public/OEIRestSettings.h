#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIRestSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class OEIREST_API UOEIRestSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JiraURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JiraProjectKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JiraConfigFile;
    
    UOEIRestSettings();
};

