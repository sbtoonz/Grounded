#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatDamageDriven.generated.h"

UCLASS()
class MAINE_API UVitalStatDamageDriven : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float DamageResponseScale;
    
public:
    UVitalStatDamageDriven();
};

