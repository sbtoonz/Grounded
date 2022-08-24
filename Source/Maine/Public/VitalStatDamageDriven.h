#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatDamageDriven.generated.h"

UCLASS(Blueprintable)
class MAINE_API UVitalStatDamageDriven : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageResponseScale;
    
public:
    UVitalStatDamageDriven();
};

