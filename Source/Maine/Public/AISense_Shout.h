#pragma once
#include "CoreMinimal.h"
#include "AIShoutEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense -FallbackName=AISense
#include "AISense_Shout.generated.h"

class AActor;
class UObject;

UCLASS(Config=Game)
class MAINE_API UAISense_Shout : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FAIShoutEvent> ShoutEvents;
    
    UPROPERTY(Config)
    float SpeedOfSoundSq;
    
    UAISense_Shout();
    UFUNCTION(BlueprintCallable)
    static void ReportShoutEvent(UObject* WorldContextObject, AActor* Shouter, AActor* Target, FName Tag);
    
};

