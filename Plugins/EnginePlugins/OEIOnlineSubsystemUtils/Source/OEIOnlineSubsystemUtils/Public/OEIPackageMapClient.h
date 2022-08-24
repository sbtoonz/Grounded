#pragma once
#include "CoreMinimal.h"
#include "Engine/PackageMapClient.h"
#include "OEIPackageMapClient.generated.h"

UCLASS(Blueprintable, DefaultConfig, NonTransient)
class OEIONLINESUBSYSTEMUTILS_API UOEIPackageMapClient : public UPackageMapClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NetGUIDResetExceptionFilters;
    
    UOEIPackageMapClient();
};

