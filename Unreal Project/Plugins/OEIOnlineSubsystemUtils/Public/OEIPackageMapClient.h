#pragma once
#include "CoreMinimal.h"
#include "Engine/PackageMapClient.h"
#include "OEIPackageMapClient.generated.h"

UCLASS(DefaultConfig, NonTransient)
class OEIONLINESUBSYSTEMUTILS_API UOEIPackageMapClient : public UPackageMapClient {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FString> NetGUIDResetExceptionFilters;
    
    UOEIPackageMapClient();
};

