#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseLODComponent.generated.h"

class UBaseLODActor;
class UActorComponent;
class UProxyComponent;

UCLASS(Blueprintable)
class MAINE_API UBaseLODComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseLODActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UActorComponent* FullComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProxyComponent* ProxyComponent;
    
public:
    UBaseLODComponent();
};

