#pragma once
#include "CoreMinimal.h"
#include "NarrationSubstitution.generated.h"

USTRUCT(BlueprintType)
struct FNarrationSubstitution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplacementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplacementIPA;
    
    INTERFACENARRATION_API FNarrationSubstitution();
};

