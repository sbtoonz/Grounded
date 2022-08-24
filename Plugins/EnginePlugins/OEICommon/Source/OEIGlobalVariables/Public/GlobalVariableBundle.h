#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableEntry.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "GlobalVariableBundle.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableBundle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGlobalVariableEntry> GlobalVariableValues;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
public:
    UGlobalVariableBundle();
};

