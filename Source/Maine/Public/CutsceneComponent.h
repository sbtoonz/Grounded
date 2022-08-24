#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CutsceneComponent.generated.h"

class UObject;
class UCutsceneDataAsset;
class UMaineMovieWidget;
class UActiveCutscene;
class UWindowWidget;
class AActor;
class ALevelSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCutsceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMaineMovieWidget> MovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaineMovieWidget* ActiveMovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActiveCutscene*> ActiveCutscenes;
    
public:
    UCutsceneComponent();
    UFUNCTION(BlueprintCallable)
    void StartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayMovie(UObject* InMediaObject, float Delay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovieWidgetClosed(UWindowWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieFinished(bool bWasSkipped);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetCurrentSequence() const;
    
};

