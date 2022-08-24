#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "FoliageManager.generated.h"

class UPersistenceComponent;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class MAINE_API AFoliageManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    AFoliageManager();
};

