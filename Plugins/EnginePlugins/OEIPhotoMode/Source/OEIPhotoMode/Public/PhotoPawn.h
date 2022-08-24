#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SpectatorPawn.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPhotoPawnType.h"
#include "PhotoPawn.generated.h"

class UCurveFloat;
class UCineCameraComponent;
class USpringArmComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class OEIPHOTOMODE_API APhotoPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* CameraComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShutterEffectFloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CameraShutterPPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutterEffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutterEffectStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShutterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DidUnregisterFromPerception;
    
public:
    APhotoPawn();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TakePhoto();
    
    UFUNCTION(BlueprintCallable)
    bool SwapInputAxisBinding(const FName OldAxisName, const FName NewAxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoTakenXbox();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhotoTaken(int32 Width, int32 Height, const TArray<FColor>& Colors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPhotoPawnType GetPhotoPawnType() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeCameraType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BrowsePhotos();
    
};

