#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "TeamLODComponent.generated.h"

class UObject;
class UBaseLODActor;
class AActor;

UCLASS(BlueprintType)
class MAINE_API UTeamLODComponent : public UBaseLODComponent {
    GENERATED_BODY()
public:
    UTeamLODComponent();
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToObject(const UObject* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToLODActor(const UBaseLODActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetCurrentTeamRowHandle() const;
    
};

