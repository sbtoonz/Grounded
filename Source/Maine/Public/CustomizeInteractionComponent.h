#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CustomizeInteractionComponent.generated.h"

class UCustomPropertiesWindowWidget;
class UCustomPropertyComponent;
class AActor;
class ASurvivalPlayerCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCustomizeInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCustomPropertiesWindowWidget> WidgetClass;
    
    UCustomizeInteractionComponent();
    UFUNCTION(BlueprintCallable)
    void ShowCustomizationUI(UCustomPropertyComponent* CustomPropertyComponent);
    
    UFUNCTION(Reliable, Server)
    void ServerSetCustomPropertyComponentInUse(ASurvivalPlayerCharacter* CustomizingPlayer, UCustomPropertyComponent* Component, bool InUse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnCustomPropertyComponentChanged(UCustomPropertyComponent* CustomPropertyComponent, FName PropertyName, float PropertyValue);
    
    UFUNCTION()
    void OnCustomizeUIClosed(AActor* InteractableActor);
    
};

