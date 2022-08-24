#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OEIStringCrcSettings.generated.h"

UCLASS(DefaultConfig)
class OEIONLINESUBSYSTEMUTILS_API UOEIStringCrcSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseStringCrcForPackageGUID;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> CustomStrings;
    
    UOEIStringCrcSettings();
};

