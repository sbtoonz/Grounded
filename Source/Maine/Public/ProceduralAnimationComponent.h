#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ProceduralAnimationHandle.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralAnimationComponent.generated.h"

class UObject;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UProceduralAnimationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

