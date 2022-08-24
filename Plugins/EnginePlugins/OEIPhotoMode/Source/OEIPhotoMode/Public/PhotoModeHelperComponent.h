#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhotoModeHelperOptions.h"
#include "PhotoModeHelpersState.h"
#include "PhotoModeHelperComponent.generated.h"

class APlayerController;
class UPhotoModePoseData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIPHOTOMODE_API UPhotoModeHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeHelperOptions Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeHelpersState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModePoseData* PhotoModePoseSet;
    
    UPhotoModeHelperComponent();
    UFUNCTION(BlueprintCallable)
    void OnPhotoModePrePause();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModePreEntered(APlayerController* InController);
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeExit();
    
    UFUNCTION(BlueprintCallable)
    void ForceLOD(int32 ForcedLOD);
    
};

