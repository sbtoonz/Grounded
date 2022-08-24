#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaterManagerComponent.generated.h"

class ABuoyantProp;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWaterManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuoyantProp*> BuoyantPropList;
    
public:
    UWaterManagerComponent();
};

