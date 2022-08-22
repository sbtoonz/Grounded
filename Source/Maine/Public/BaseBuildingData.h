#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EBuildingGroundEmbedMode.h"
#include "EBuildingSlotType.h"
#include "EBuildingBuoyantPlacementMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "BuildingPivotUpdate.h"
#include "BaseBuildingData.generated.h"

class UTexture2D;
class ABuilding;
class UStaticMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBaseBuildingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedWildcardDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FLocString> SearchableKeywords;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Heat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bBaseBuilding: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WaveDamageScore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ABuilding> BuildingActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ABuilding> BuildingActorFlipped;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ABuilding> BuildingActorDiagonal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ABuilding> BuildingActorWall;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ABuilding> BuildingActorCeiling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBuildingSlotType SlotType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseAlternateSlotType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBuildingSlotType AlternateSlotType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBuildingGroundEmbedMode EmbedMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bPlaceAtPlayerRotation: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRotateRandom: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowPlaceInWater: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBuildingBuoyantPlacementMode BuoyantPlacement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float FreeBuildingPlacementDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float BuildingWallMountPlacementDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float BuildingCeilingMountPlacementDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FVector PlacementOriginOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDoOverrideAllowedWallNormal: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FFloatRange OverrideAllowedWallNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CozinessContribution;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CozinessAdditionalContribution;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCozinessStructural: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> ModelViewerMeshOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> ModelViewerMaterialsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bModelViewerAddOverheadSpotlight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingPivotUpdate> PivotUpdateHistory;
    
    MAINE_API FBaseBuildingData();
};

