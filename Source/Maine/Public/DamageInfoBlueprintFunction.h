#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DamageInfo.h"
#include "DeathInfo.h"
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
    static void GetDeathMessage(APlayerState* OwnerPlayerState, const FDeathInfo& DeathInfo, FString& OutText, bool bForceDeathMessage);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetActorDamageSource(const FDamageInfo& DamageInfo);
    
};

