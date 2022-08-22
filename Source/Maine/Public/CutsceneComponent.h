#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CutsceneComponent.generated.h"

class UActiveCutscene;
class UMaineMovieWidget;
class UObject;
class UCutsceneDataAsset;
class ALevelSequenceActor;
class UWindowWidget;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCutsceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UMaineMovieWidget> MovieWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMaineMovieWidget* ActiveMovieWidget;
    
    UPROPERTY(Transient)
    TArray<UActiveCutscene*> ActiveCutscenes;
    
public:
    UCutsceneComponent();
    UFUNCTION(BlueprintCallable)
    void StartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayMovie(UObject* InMediaObject, float Delay);
    
protected:
    UFUNCTION()
    void OnMovieWidgetClosed(UWindowWidget* Sender);
    
    UFUNCTION()
    void OnMovieFinished(bool bWasSkipped);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor);
    
    UFUNCTION(BlueprintPure)
    ALevelSequenceActor* GetCurrentSequence() const;
    
};

