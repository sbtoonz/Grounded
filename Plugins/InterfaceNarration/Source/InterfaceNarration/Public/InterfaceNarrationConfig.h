#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LocString.h"
#include "NarrationSubstitution.h"
#include "InterfaceNarrationConfig.generated.h"

class USoundClass;

UCLASS(Blueprintable, Const)
class INTERFACENARRATION_API UInterfaceNarrationConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNarrationSubstitution> PronunciationSubstitutions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* NarrationSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString XOfYString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString EditingString;
    
    UInterfaceNarrationConfig();
};

