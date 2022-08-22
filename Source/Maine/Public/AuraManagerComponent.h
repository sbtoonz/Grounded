#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AuraReceiverInfo.h"
#include "EmitterList.h"
#include "AuraManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAuraManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGameplayTag, FEmitterList> SortedEmitters;
    
    UPROPERTY(Transient)
    TArray<FAuraReceiverInfo> Receivers;
    
public:
    UAuraManagerComponent();
};

