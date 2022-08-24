#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageInfo.h"
#include "DeathInfo.h"
#include "DamageInfoBlueprintFunction.generated.h"

class UBaseLODActor;
class APlayerState;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UDamageInfoBlueprintFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageInfoBlueprintFunction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* GetLODActorDamageSource(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDeathMessage(APlayerState* OwnerPlayerState, const FDeathInfo& DeathInfo, FString& OutText, bool bForceDeathMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetActorDamageSource(const FDamageInfo& DamageInfo);
    
};

