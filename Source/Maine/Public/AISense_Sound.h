#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense -FallbackName=AISense
#include "AISoundEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISense_Sound.generated.h"

class AActor;
class UObject;

UCLASS()
class MAINE_API UAISense_Sound : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FAISoundEvent> SoundEvents;
    
    UAISense_Sound();
    UFUNCTION(BlueprintCallable)
    static void ReportSoundEvent(UObject* WorldContextObject, AActor* Instigator, FVector Location, float Intensity, float Range, FName Tag);
    
};

