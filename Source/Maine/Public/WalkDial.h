#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WalkDial.generated.h"

class USceneComponent;
class ASurvivalCharacter;
class UCharacterMotionEaterComponent;
class UStaticMeshComponent;

UCLASS()
class MAINE_API AWalkDial : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Radius;
    
protected:
    UPROPERTY(Export, Transient)
    UCharacterMotionEaterComponent* MotionEater;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* DialRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* DialMeshComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString InteractString;
    
private:
    UPROPERTY(Replicated)
    uint8 bIsBusy: 1;
    
public:
    AWalkDial();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnMotionInput(UCharacterMotionEaterComponent* Sender, FVector2D Input);
    
    UFUNCTION()
    void OnCharacterDetached(UCharacterMotionEaterComponent* Sender, ASurvivalCharacter* Character);
    
    UFUNCTION()
    void OnCharacterAttached(UCharacterMotionEaterComponent* Sender, ASurvivalCharacter* Character);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDialRotated(float Delta);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleCharacterDetached(ASurvivalCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleCharacterAttached(ASurvivalCharacter* Character);
    
    
    // Fix for true pure virtual functions not being implemented
};

