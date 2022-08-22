#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightmapType -FallbackName=ELightmapType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "SMInstancerMeshID.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT()
struct FSMInstancerMeshID {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* Mesh;
    
    UPROPERTY()
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY()
    FName CollisionProfile;
    
    UPROPERTY()
    bool bUseDefaultCollision;
    
    UPROPERTY()
    float MaxDrawDistance;
    
    UPROPERTY()
    bool bOverrideLightMapRes;
    
    UPROPERTY()
    int32 OverriddenLightMapRes;
    
    UPROPERTY()
    bool UseEmissiveForStaticLighting;
    
    UPROPERTY()
    float EmissiveBoost;
    
    UPROPERTY()
    bool CastShadow;
    
    UPROPERTY()
    ELightmapType LightmapType;
    
    UPROPERTY()
    bool bCastFarShadow;
    
    UPROPERTY()
    bool bHiddenShadow;
    
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    bool bActorHiddenInGame;
    
    UPROPERTY()
    bool bNeverDistanceCull;
    
    UPROPERTY()
    bool bAllowCullDistanceVolume;
    
    UPROPERTY()
    bool bFillCollisionUnderneathForNavmesh;
    
    UPROPERTY()
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    MAINE_API FSMInstancerMeshID();
};

