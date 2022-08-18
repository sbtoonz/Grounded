#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIStringCrcSettings.generated.h"

UCLASS(DefaultConfig)
class OEIONLINESUBSYSTEMUTILS_API UOEIStringCrcSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool UseStringCrcForPackageGUID;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> CustomStrings;
    
    UOEIStringCrcSettings();
};

