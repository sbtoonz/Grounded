#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "ColonyIdentifier.h"
#include "ColonyMemberLODComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API UColonyMemberLODComponent : public UBaseLODComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UColonyMemberLODComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMemberOf(const FColonyIdentifier& ColonyId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyIdentifier GetColonyIdentifier() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

