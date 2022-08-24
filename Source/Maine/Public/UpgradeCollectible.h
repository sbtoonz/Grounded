#pragma once
#include "CoreMinimal.h"
#include "Collectible.h"
#include "Engine/EngineTypes.h"
#include "UpgradeCollectible.generated.h"

class USphereComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AUpgradeCollectible : public ACollectible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPartyUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradePoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
public:
    AUpgradeCollectible();
    UFUNCTION(BlueprintCallable)
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

