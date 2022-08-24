#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "GameplayTagContainer.h"
#include "CraftingBuilding.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API ACraftingBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CraftingBuildingTag;
    
public:
    ACraftingBuilding();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCraftingBuildingType() const;
    
};

