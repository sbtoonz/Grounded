#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "LocString.h"
#include "UObject/NoExportTypes.h"
#include "WalkDial.generated.h"

class ASurvivalCharacter;
class UCharacterMotionEaterComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAINE_API AWalkDial : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMotionEaterComponent* MotionEater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* DialRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DialMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractString;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsBusy: 1;
    
public:
    AWalkDial();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMotionInput(UCharacterMotionEaterComponent* Sender, FVector2D Input);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDetached(UCharacterMotionEaterComponent* Sender, ASurvivalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterAttached(UCharacterMotionEaterComponent* Sender, ASurvivalCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDialRotated(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCharacterDetached(ASurvivalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCharacterAttached(ASurvivalCharacter* Character);
    
    
    // Fix for true pure virtual functions not being implemented
};

