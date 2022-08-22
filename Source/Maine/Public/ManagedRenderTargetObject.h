#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ManagedRenderTargetObject.generated.h"

UCLASS(BlueprintType)
class MAINE_API UManagedRenderTargetObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D Size;
    
    UManagedRenderTargetObject();
};

