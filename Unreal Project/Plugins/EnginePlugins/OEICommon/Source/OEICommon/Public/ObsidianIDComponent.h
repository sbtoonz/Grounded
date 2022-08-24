#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ObsidianIDComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEICOMMON_API UObsidianIDComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FGuid ID;
    
    UPROPERTY(EditAnywhere)
    int32 DataTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIgnoreSavingOfDestruction;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bInstancesShareSavedState;
    
public:
    UObsidianIDComponent();
    UFUNCTION(BlueprintCallable)
    void ResetID();
    
};

