#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstanceSingleOptAct.h"
#include "BurgleQuestInstanceMarkPoint.generated.h"

class ABuilding;

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestInstanceMarkPoint : public UBurgleQuestInstanceSingleOptAct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuilding* DesignatedBuilding;
    
public:
    UBurgleQuestInstanceMarkPoint();
};

