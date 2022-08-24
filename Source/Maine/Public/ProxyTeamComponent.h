#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DataTable.h"
#include "ProxyTeamComponent.generated.h"

class AActor;
class UBaseLODActor;

UCLASS(Blueprintable)
class MAINE_API UProxyTeamComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UProxyTeamComponent();
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToLODActor(const UBaseLODActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCurrentTeamRowHandle() const;
    
};

