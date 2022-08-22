#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameVersion.h"
#include "PersistenceComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPersistenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNeverSpawnAsDynamicActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoreTransformRestore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameVersion MinimumVersionToRestore;
    
public:
    UPersistenceComponent();
};

