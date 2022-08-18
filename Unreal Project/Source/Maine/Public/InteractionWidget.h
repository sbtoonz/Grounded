#pragma once
#include "CoreMinimal.h"
#include "CloseDelegateDelegate.h"
#include "WindowWidget.h"
#include "InitializedDelegateDelegate.h"
#include "InteractionWidget.generated.h"

class AActor;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UInteractionWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInitializedDelegate OnInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCloseDelegate OnClose;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCloseOnInteract;
    
private:
    UPROPERTY(Transient)
    AActor* InteractableActor;
    
public:
    UInteractionWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleInitialize(AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetInteractableActor() const;
    
};

