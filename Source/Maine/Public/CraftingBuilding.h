#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CraftingBuilding.generated.h"

UCLASS(Abstract)
class MAINE_API ACraftingBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag CraftingBuildingTag;
    
public:
    ACraftingBuilding();
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCraftingBuildingType() const;
    
};

