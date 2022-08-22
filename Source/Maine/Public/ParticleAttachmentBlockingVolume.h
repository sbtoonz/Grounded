#pragma once
#include "CoreMinimal.h"
#include "EParticleBlockingVolumeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "ParticleAttachmentBlockingVolume.generated.h"

class UBoxComponent;
class USphereComponent;

UCLASS()
class MAINE_API AParticleAttachmentBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USphereComponent* InnerBlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USphereComponent* OuterBlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UBoxComponent* KillVolume;
    
    UPROPERTY(EditAnywhere)
    EParticleBlockingVolumeType Type;
    
    AParticleAttachmentBlockingVolume();
};

