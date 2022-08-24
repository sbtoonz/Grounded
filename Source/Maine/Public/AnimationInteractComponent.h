#pragma once
#include "CoreMinimal.h"
#include "EInteractAnimType.h"
#include "Components/ActorComponent.h"
#include "InteractAnimData.h"
#include "InteractDelegateDelegate.h"
#include "AnimationInteractComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAnimationInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractDelegate OnInteractAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteractAnimType, FInteractAnimData> InteractAnimData;
    
public:
    UAnimationInteractComponent();
};

