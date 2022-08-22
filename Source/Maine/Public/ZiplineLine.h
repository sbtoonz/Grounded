#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "Building.h"
#include "ActorZiplineDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ZiplineLine.generated.h"

class USplineMeshComponent;
class USoundCue;
class AZiplineAnchorBuilding;
class UZiplineAnchor;

UCLASS()
class MAINE_API AZiplineLine : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FActorZiplineDelegate OnActorStartZiplining;
    
    UPROPERTY(BlueprintAssignable)
    FActorZiplineDelegate OnActorStopZiplining;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* SplineMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* SplineCollision;
    
    UPROPERTY(EditInstanceOnly)
    AZiplineAnchorBuilding* InitialAnchorA;
    
    UPROPERTY(EditInstanceOnly)
    AZiplineAnchorBuilding* InitialAnchorB;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Anchor1)
    UZiplineAnchor* Anchor1;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Anchor2)
    UZiplineAnchor* Anchor2;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AnchorLocation)
    FVector_NetQuantize AnchorLocation1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AnchorLocation)
    FVector_NetQuantize AnchorLocation2;
    
    UPROPERTY(EditDefaultsOnly)
    float IngredientLengthUnit;
    
    UPROPERTY(EditDefaultsOnly)
    USoundCue* ItemAttachmentAudio;
    
public:
    AZiplineLine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void TickUpdatePosition(float DeltaTime);
    
protected:
    UFUNCTION()
    void OnRep_AnchorLocation();
    
    UFUNCTION()
    void OnRep_Anchor2();
    
    UFUNCTION()
    void OnRep_Anchor1();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAnchor(const UZiplineAnchor* Anchor) const;
    
    UFUNCTION(BlueprintPure)
    float GetTerminalSpeed(float VerticalTerminalSpeed) const;
    
    UFUNCTION(BlueprintPure)
    float GetSlope() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightDirection() const;
    
    UFUNCTION(BlueprintPure)
    UZiplineAnchor* GetOtherAnchor(UZiplineAnchor* Anchor) const;
    
    UFUNCTION(BlueprintPure)
    float GetLength() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirection() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAttachedRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetAscendSpeed(float BaseSpeed) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAnchorLocation2() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAnchorLocation1() const;
    
    UFUNCTION(BlueprintPure)
    UZiplineAnchor* GetAnchor2() const;
    
    UFUNCTION(BlueprintPure)
    UZiplineAnchor* GetAnchor1() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintUpdateZipline();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintInitializeZipline();
    
    UFUNCTION(BlueprintPure)
    bool AreAnchors(const UZiplineAnchor* AnchorA, const UZiplineAnchor* AnchorB) const;
    
};

