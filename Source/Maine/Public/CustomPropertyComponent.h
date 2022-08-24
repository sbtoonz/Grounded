#pragma once
#include "CoreMinimal.h"
#include "OnCustomPropertyValueChangedDelegate.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "OnIsCustomizingChangedDelegate.h"
#include "CameraViewProvider.h"
#include "UObject/NoExportTypes.h"
#include "OnUserInterfaceInitializedDelegate.h"
#include "CustomizedValue.h"
#include "CustomPropertyComponent.generated.h"

class UPhotoModePoseData;
class UCustomPropertyDataAsset;
class ASurvivalPlayerCharacter;
class UCustomPropertiesWindowWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCustomPropertyComponent : public UActorComponent, public IPersistentInterface, public ICameraViewProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModePoseData* CustomizationPoseSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCustomLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector CustomLookAtLocationWS;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomPropertyValueChanged OnCustomPropertyValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInterfaceInitialized OnUserInterfaceInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsCustomizingChanged OnIsCustomizingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomPropertyDataAsset* CustomPropertyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CustomizedValuesArray, meta=(AllowPrivateAccess=true))
    TArray<FCustomizedValue> CustomizedValuesArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsInUseCustomizingPlayer, meta=(AllowPrivateAccess=true))
    bool IsInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsInUseCustomizingPlayer, meta=(AllowPrivateAccess=true))
    ASurvivalPlayerCharacter* CustomizingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredCameraAngleVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraCollisionInsetDistance;
    
public:
    UCustomPropertyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsInUse(ASurvivalPlayerCharacter* InCustomizingPlayer, bool InUse);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPropertyValue(FName PropertyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnUIReady(UCustomPropertiesWindowWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInUseCustomizingPlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomizedValuesArray(const TArray<FCustomizedValue>& PreviousCustomizedValuesArray);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsManualValueTextUpdates() const;
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPropertyChanged(FName PropertyName, float PropertyValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPropertyCustomized(FName Property) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomPropertyValue(FName PropertyName, float& AsFloat, int32& AsInt, bool& AsBool);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCameraInterestLocation() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

