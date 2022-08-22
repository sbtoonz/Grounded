#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EConversationNodeDisplayStyle.h"
#include "NonPlayerInteraction.generated.h"

class UConditionalToggleComponent;
class USceneComponent;
class UBillboardComponent;
class UObsidianIDComponent;
class UPersistenceComponent;
class ASurvivalCharacter;

UCLASS()
class MAINE_API ANonPlayerInteraction : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBillboardComponent* WaypointComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UConditionalToggleComponent* ShowTalkIconConditionalToggle;
    
    UPROPERTY(Export, VisibleAnywhere)
    UConditionalToggleComponent* BarkConditionalToggle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUnlimitedRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EligibleRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer CharacterTags;
    
    UPROPERTY(EditAnywhere)
    FConversationReference AttractConversation;
    
    UPROPERTY(EditAnywhere)
    int32 AttractStartNode;
    
    UPROPERTY(EditAnywhere)
    FConversationReference AttractRepeatConversation;
    
    UPROPERTY(EditAnywhere)
    int32 AttractRepeatStartNode;
    
    UPROPERTY(EditAnywhere)
    float AttractRepeatInterval;
    
    UPROPERTY(EditAnywhere)
    FConversationReference InteractConversation;
    
    UPROPERTY(EditAnywhere)
    int32 InteractStartNode;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableInteractBeforeAttract: 1;
    
public:
    ANonPlayerInteraction();
    UFUNCTION(BlueprintCallable)
    void PlayInteractConversation(AActor* Interactor, AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    void PlayAttractRepeatConversation(AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    void PlayAttractConversation(AActor* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsInteractConversationEnabled(AActor* Interactor, AActor* Character) const;
    
protected:
    UFUNCTION()
    void HandleConversationComplete(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CharacterCanInteract(ASurvivalCharacter* Character) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

