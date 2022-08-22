#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EDefaultBehaviorType.h"
#include "ActorLiteData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentProperties -FallbackName=NavAgentProperties
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EWaveCreatureWeightClass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "InterestConfig.h"
#include "SurvivalCharacterLiteData.generated.h"

class AProxyStandInActor;

UCLASS()
class MAINE_API USurvivalCharacterLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<AProxyStandInActor> ProxyStandInClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle CharacterDataRow;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLocString TypeName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bShouldActorLOD;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxFullActorDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AverageDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FDataTableRowHandle> ActivePetPassiveEffects;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EWaveCreatureWeightClass WaveWeightClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FNavAgentProperties NavAgentProperties;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DefaultHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxSwimSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxFlySpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bIsFlyer: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bIsSwimmer: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bHasAttacks: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector SkeletalMeshOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxPitch;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float InMotionWiggleAmplitude;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float IdleWiggleAmplitude;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FDataTableRowHandle> DefaultStatusEffects;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bHasController: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bIsStationary: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TetherRange;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float WanderRange;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EDefaultBehaviorType DefaultBehaviorType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ExploreMinAltitude;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ExploreMaxAltitude;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bHasInterestComponent: 1;
    
    UPROPERTY(VisibleAnywhere)
    FInterestConfig Interest;
    
    USurvivalCharacterLiteData();
};

