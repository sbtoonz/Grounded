#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "PhotoModeCharacterCollisionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeCharacterCollisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionObjectType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer CollisionResponseContainer;
    
    OEIPHOTOMODE_API FPhotoModeCharacterCollisionInfo();
};

