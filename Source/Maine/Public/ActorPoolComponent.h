#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActorPoolComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UActorPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> BaseObject;
    
protected:
    UPROPERTY(Transient)
    TArray<AActor*> PooledInstances;
    
public:
    UActorPoolComponent();
    UFUNCTION(BlueprintCallable)
    void ReleaseInstance(AActor* Instance);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetInstance();
    
};

