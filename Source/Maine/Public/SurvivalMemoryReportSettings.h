#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SurvivalMemoryReportSettings.generated.h"

UCLASS(Blueprintable, Config=ProfileTools)
class USurvivalMemoryReportSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LightingLevels;
    
    USurvivalMemoryReportSettings();
};

