#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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

