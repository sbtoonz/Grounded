#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Perception/AISense.h"
#include "AISoundEvent.h"
#include "AISense_Sound.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UAISense_Sound : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAISoundEvent> SoundEvents;
    
    UAISense_Sound();
    UFUNCTION(BlueprintCallable)
    static void ReportSoundEvent(UObject* WorldContextObject, AActor* Instigator, FVector Location, float Intensity, float Range, FName Tag);
    
};

