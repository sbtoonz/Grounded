#pragma once
#include "CoreMinimal.h"
#include "Collectible.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "UpgradeCollectible.generated.h"

class USphereComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class MAINE_API AUpgradeCollectible : public ACollectible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPartyUpgrade;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 UpgradePoints;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
public:
    AUpgradeCollectible();
    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

