#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ColonyIdentifier.h"
#include "ProxyColonyMemberComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API UProxyColonyMemberComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UProxyColonyMemberComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMemberOf(const FColonyIdentifier& ColonyId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyIdentifier GetColonyIdentifier() const;
    
};

