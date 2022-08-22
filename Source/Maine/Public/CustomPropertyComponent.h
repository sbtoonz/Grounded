#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CameraViewProvider.h"
#include "PersistentInterface.h"
#include "OnIsCustomizingChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnCustomPropertyValueChangedDelegate.h"
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
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPhotoModePoseData* CustomizationPoseSet;
    
    UPROPERTY(EditDefaultsOnly)
    bool HasCustomLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    FVector CustomLookAtLocationWS;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnCustomPropertyValueChanged OnCustomPropertyValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnUserInterfaceInitialized OnUserInterfaceInitialized;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsCustomizingChanged OnIsCustomizingChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCustomPropertyDataAsset* CustomPropertyData;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_CustomizedValuesArray)
    TArray<FCustomizedValue> CustomizedValuesArray;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsInUseCustomizingPlayer)
    bool IsInUse;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsInUseCustomizingPlayer)
    ASurvivalPlayerCharacter* CustomizingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AcceptableCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredCameraAngleVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraCollisionInsetDistance;
    
public:
    UCustomPropertyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetIsInUse(ASurvivalPlayerCharacter* InCustomizingPlayer, bool InUse);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPropertyValue(FName PropertyName, float Value);
    
    UFUNCTION()
    void OnUIReady(UCustomPropertiesWindowWidget* Widget);
    
protected:
    UFUNCTION()
    void OnRep_IsInUseCustomizingPlayer();
    
    UFUNCTION()
    void OnRep_CustomizedValuesArray(const TArray<FCustomizedValue>& PreviousCustomizedValuesArray);
    
public:
    UFUNCTION(BlueprintPure)
    bool NeedsManualValueTextUpdates() const;
    
    UFUNCTION()
    void NativeOnPropertyChanged(FName PropertyName, float PropertyValue);
    
    UFUNCTION(BlueprintPure)
    bool IsPropertyCustomized(FName Property) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCustomProperties() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInUse() const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomPropertyValue(FName PropertyName, float& AsFloat, int32& AsInt, bool& AsBool);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    FVector GetCameraInterestLocation() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

