#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "WaveBlockerVolume.generated.h"

class AActor;
class ASurvivalPlayerCharacter;
class UPrimitiveComponent;

UCLASS()
class MAINE_API AWaveBlockerVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ASurvivalPlayerCharacter*> OverlappingPlayers;
    
public:
    AWaveBlockerVolume();
protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    int32 NumOverlappingPlayers() const;
    
};

