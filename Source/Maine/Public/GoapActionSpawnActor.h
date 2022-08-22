#pragma once
#include "CoreMinimal.h"
#include "GoapActionAdjustVitals.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GoapActionSpawnActor.generated.h"

class AActor;

UCLASS()
class MAINE_API UGoapActionSpawnActor : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> SpawnActor;
    
    UPROPERTY(EditAnywhere)
    FName SpawnSocket;
    
    UPROPERTY(EditAnywhere)
    uint8 bFaceCharacter: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpawnOnGround: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceSimulatePhysics: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bSpawnActorIsRelevantItem: 1;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SpawnInRegion;
    
    UGoapActionSpawnActor();
};

