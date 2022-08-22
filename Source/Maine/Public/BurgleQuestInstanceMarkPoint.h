#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstanceSingleOptAct.h"
#include "BurgleQuestInstanceMarkPoint.generated.h"

class ABuilding;

UCLASS()
class MAINE_API UBurgleQuestInstanceMarkPoint : public UBurgleQuestInstanceSingleOptAct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    ABuilding* DesignatedBuilding;
    
public:
    UBurgleQuestInstanceMarkPoint();
};

