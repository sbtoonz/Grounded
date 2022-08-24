#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIStringCrcSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class OEIONLINESUBSYSTEMUTILS_API UOEIStringCrcSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStringCrcForPackageGUID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CustomStrings;
    
    UOEIStringCrcSettings();
};

