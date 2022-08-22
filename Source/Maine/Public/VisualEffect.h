#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EVisualEffectMeshType.h"
#include "VisualEffect.generated.h"

class UParticleSystem;

UCLASS(BlueprintType)
class MAINE_API UVisualEffect : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UClass* VFXBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAttachedToActor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EVisualEffectMeshType SocketMeshType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName MeshTagName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ShadowCastingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bInheritScale;
    
public:
    UVisualEffect();
};

