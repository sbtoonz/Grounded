#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ProceduralAnimationHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "ProceduralAnimationComponent.generated.h"

class UObject;
class UCurveFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UProceduralAnimationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bAdditiveRotationEnabled;
    
    UProceduralAnimationComponent();
    UFUNCTION(BlueprintCallable)
    void StopAnimation(UPARAM(Ref) FProceduralAnimationHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveRotationQuat(UObject* Source, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveRotation(UObject* Source, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    FProceduralAnimationHandle PlayWiggle(UObject* Source, UCurveFloat* InStrengthCurve, float Frequency, float Delay, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    FProceduralAnimationHandle PlayScaleAnimation(UObject* Source, UCurveFloat* InStrengthXCurve, UCurveFloat* InStrengthYCurve, UCurveFloat* InStrengthZCurve, float Delay, bool bLoop);
    
};

