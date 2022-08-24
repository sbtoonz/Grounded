#pragma once
#include "CoreMinimal.h"
#include "ChatterBundle.h"
#include "Engine/DataAsset.h"
#include "ChatterEvent.h"
#include "CooldownSet.h"
#include "ChatterVariantSet.h"
#include "UObject/NoExportTypes.h"
#include "ChatterBundleSet.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UChatterBundleSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatterBundle> ChatterBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatterEvent> ChatterEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCooldownSet> CooldownSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FChatterVariantSet> VariantSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VOAssetFolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AudioAssets;
    
public:
    UChatterBundleSet();
};

