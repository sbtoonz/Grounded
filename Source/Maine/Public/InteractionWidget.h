#pragma once
#include "CoreMinimal.h"
#include "CloseDelegateDelegate.h"
#include "WindowWidget.h"
#include "InitializedDelegateDelegate.h"
#include "InteractionWidget.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UInteractionWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitializedDelegate OnInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseDelegate OnClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseOnInteract;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* InteractableActor;
    
public:
    UInteractionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInitialize(AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractableActor() const;
    
};

