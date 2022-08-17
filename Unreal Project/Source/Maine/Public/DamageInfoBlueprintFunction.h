#pragma once
#include "CoreMinimal.h"
#include "DeathInfo.h"
#include "DamageInfo.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageInfoBlueprintFunction.generated.h"

class UBaseLODActor;
class APlayerState;
class AActor;

UCLASS(BlueprintType)
class MAINE_API UDamageInfoBlueprintFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageInfoBlueprintFunction();
    UFUNCTION(BlueprintPure)
    static UBaseLODActor* GetLODActorDamageSource(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetActorDamageSource(const FDamageInfo& DamageInfo);
    
};

