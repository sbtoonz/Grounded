#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "ColonyIdentifier.h"
#include "ColonyMemberLODComponent.generated.h"

UCLASS(BlueprintType)
class MAINE_API UColonyMemberLODComponent : public UBaseLODComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UColonyMemberLODComponent();
    UFUNCTION(BlueprintPure)
    bool IsMemberOf(const FColonyIdentifier& ColonyId) const;
    
    UFUNCTION(BlueprintPure)
    FColonyIdentifier GetColonyIdentifier() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

