#pragma once
#include "CoreMinimal.h"
#include "InteractAnimData.h"
#include "EInteractAnimType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "InteractDelegateDelegate.h"
#include "AnimationInteractComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAnimationInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractDelegate OnInteractAnimation;
    
protected:
    UPROPERTY(EditAnywhere)
    TMap<EInteractAnimType, FInteractAnimData> InteractAnimData;
    
public:
    UAnimationInteractComponent();
};

