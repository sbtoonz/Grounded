#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FoliageRespawnRules.h"
#include "FoliageMapping.h"
#include "FoliageKey.h"
#include "EFoliageInstanceState.h"
#include "GlobalFoliageData.generated.h"

class UStaticMesh;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalFoliageData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FFoliageRespawnRules> FoliageRespawnRules;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<UStaticMesh*, FFoliageMapping> FoliageMappings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UStaticMesh*> GroundFoliage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoliageRustleFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoliageRustleFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoliageRustleMinEnergy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InstanceIfNecessaryDistance;
    
    UGlobalFoliageData();
    UFUNCTION(BlueprintPure)
    float GetFoliagePlayerSwapDistanceFromMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    float GetFoliagePlayerSwapDistanceFromKey(const FFoliageKey& Key) const;
    
    UFUNCTION(BlueprintPure)
    EFoliageInstanceState GetFoliageDefaultStateFromMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    EFoliageInstanceState GetFoliageDefaultStateFromKey(const FFoliageKey& Key) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFoliageAnimatesFromMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFoliageAnimatesFromKey(const FFoliageKey& Key) const;
    
};

