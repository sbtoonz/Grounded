#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "InteriorTrigger.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class MAINE_API AInteriorTrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    UBoxComponent* Box1;
    
    UPROPERTY(EditAnywhere, Export)
    UBoxComponent* Box2;
    
public:
    AInteriorTrigger();
protected:
    UFUNCTION()
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

