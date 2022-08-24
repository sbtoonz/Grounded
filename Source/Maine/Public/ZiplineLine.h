#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "ActorZiplineDelegateDelegate.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZiplineLine.generated.h"

class USplineMeshComponent;
class USoundCue;
class AZiplineAnchorBuilding;
class UZiplineAnchor;

UCLASS(Blueprintable)
class MAINE_API AZiplineLine : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorZiplineDelegate OnActorStartZiplining;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorZiplineDelegate OnActorStopZiplining;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZiplineAnchorBuilding* InitialAnchorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZiplineAnchorBuilding* InitialAnchorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_Anchor1, meta=(AllowPrivateAccess=true))
    UZiplineAnchor* Anchor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_Anchor2, meta=(AllowPrivateAccess=true))
    UZiplineAnchor* Anchor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AnchorLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize AnchorLocation1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AnchorLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize AnchorLocation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IngredientLengthUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ItemAttachmentAudio;
    
public:
    AZiplineLine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void TickUpdatePosition(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AnchorLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Anchor2();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Anchor1();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnchor(const UZiplineAnchor* Anchor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTerminalSpeed(float VerticalTerminalSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZiplineAnchor* GetOtherAnchor(UZiplineAnchor* Anchor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAttachedRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAscendSpeed(float BaseSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAnchorLocation2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAnchorLocation1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZiplineAnchor* GetAnchor2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZiplineAnchor* GetAnchor1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdateZipline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintInitializeZipline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnchors(const UZiplineAnchor* AnchorA, const UZiplineAnchor* AnchorB) const;
    
};

