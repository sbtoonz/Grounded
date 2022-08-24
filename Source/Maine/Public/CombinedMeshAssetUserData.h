#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "CombinedMeshAssetUserData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UCombinedMeshAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CombinedMesh;
    
    UCombinedMeshAssetUserData();
};

