#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectible.h"
#include "ColorCollectible.generated.h"

class UGlobalColorTheme;

UCLASS(Abstract, Blueprintable)
class MAINE_API AColorCollectible : public ACollectible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGlobalColorTheme> UnlockedTheme;
    
    AColorCollectible();
};

