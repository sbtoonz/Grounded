#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ProxyTeamComponent.generated.h"

class UBaseLODActor;
class AActor;

UCLASS(BlueprintType)
class MAINE_API UProxyTeamComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UProxyTeamComponent();
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToLODActor(const UBaseLODActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetCurrentTeamRowHandle() const;
    
};

