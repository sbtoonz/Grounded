#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectible.h"
#include "ColorCollectible.generated.h"

class UGlobalColorTheme;

UCLASS(Abstract)
class MAINE_API AColorCollectible : public ACollectible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGlobalColorTheme> UnlockedTheme;
    
    AColorCollectible();
};

