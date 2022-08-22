#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ClimbableSplineAnimSegment.h"
#include "ClimbableSplineComponent.generated.h"

class UAnimMontage;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UClimbableSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer ClimbableBy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag Role;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FClimbableSplineAnimSegment> OverrideAnims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LadderAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RungSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RungOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bLerpOnAttach: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAllowSlidingCollision: 1;
    
    UClimbableSplineComponent();
};

