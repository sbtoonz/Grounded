#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalScript.h"
#include "GlobalConditional.h"
#include "Conditional.h"
#include "GlobalScriptsBundle.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UGlobalScriptsBundle : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalScript> GlobalScripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalConditional> GlobalConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditional> Conditionals;
    
public:
    UGlobalScriptsBundle();
};

