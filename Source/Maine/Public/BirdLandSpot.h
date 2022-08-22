#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BirdSplineItemSpawn.h"
#include "EBirdSpotType.h"
#include "BirdLandSpot.generated.h"

class USplineComponent;
class UObsidianIDComponent;

UCLASS()
class MAINE_API ABirdLandSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBirdSplineItemSpawn> ArrivingItemSpawns;
    
    UPROPERTY(EditAnywhere)
    TArray<FBirdSplineItemSpawn> DepartingItemSpawns;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(EditAnywhere)
    EBirdSpotType SpotType;
    
    UPROPERTY(Export, VisibleAnywhere)
    USplineComponent* EnterSpline;
    
    UPROPERTY(Export, VisibleAnywhere)
    USplineComponent* ExitSpline;
    
public:
    ABirdLandSpot();
    UFUNCTION(BlueprintPure)
    EBirdSpotType GetSpotType() const;
    
    UFUNCTION(BlueprintPure)
    USplineComponent* GetExitSpline() const;
    
    UFUNCTION(BlueprintPure)
    USplineComponent* GetEnterSpline() const;
    
};

