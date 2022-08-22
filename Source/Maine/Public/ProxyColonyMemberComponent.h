#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ColonyIdentifier.h"
#include "ProxyColonyMemberComponent.generated.h"

UCLASS(BlueprintType)
class MAINE_API UProxyColonyMemberComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UProxyColonyMemberComponent();
    UFUNCTION(BlueprintPure)
    bool IsMemberOf(const FColonyIdentifier& ColonyId) const;
    
    UFUNCTION(BlueprintPure)
    FColonyIdentifier GetColonyIdentifier() const;
    
};

