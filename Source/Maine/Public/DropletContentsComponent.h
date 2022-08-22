#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DropletInteractionDelegateDelegate.h"
#include "DropletContentsComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UDropletContentsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverrideVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideMaxDimension;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDimension;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDropletInteractionDelegate OnAbsorbedByDroplet;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDropletInteractionDelegate OnEjectedFromDroplet;
    
    UDropletContentsComponent();
};

