#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FoliageKey.h"
#include "FoliageRespawnRules.h"
#include "FoliageMapping.h"
#include "EFoliageInstanceState.h"
#include "GlobalFoliageData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalFoliageData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFoliageRespawnRules> FoliageRespawnRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, FFoliageMapping> FoliageMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> GroundFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageRustleFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageRustleFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageRustleMinEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstanceIfNecessaryDistance;
    
    UGlobalFoliageData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFoliagePlayerSwapDistanceFromMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFoliagePlayerSwapDistanceFromKey(const FFoliageKey& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFoliageInstanceState GetFoliageDefaultStateFromMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFoliageInstanceState GetFoliageDefaultStateFromKey(const FFoliageKey& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoliageAnimatesFromMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoliageAnimatesFromKey(const FFoliageKey& Key) const;
    
};

